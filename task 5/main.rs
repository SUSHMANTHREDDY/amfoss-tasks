extern crate reqwest;
extern crate scraper;

use scraper::{Html, Selector};
fn main() {
   println!("here is the data we  are search for weeks");
   scrape_death_data("https://www.worldometers.info/coronavirus/#countries");
}

fn scrape_death_data(url:&str){
   
   let mut req = reqwest::get(url).unwrap();
   assert!(req.status().is_success());
   let doc_body = Html::parse_document(&req.text().unwrap());
   
   let death = Selector::parse(".main_table_countries_div").unwrap();
   
   
   for death in doc_body.select(&death){
   let deaths = death.text().collect::<Vec<_>>();
   println!("{}", deaths[0]);
   }
}

