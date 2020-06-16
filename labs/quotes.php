<?php

$string = "welcome to my personal home page;

# a fake example; just imagine some lengthy code here
if ($page_id == 0) {
  render_home_page();
} elseif ($page_id == 1) {
  render_contacts_page();
} elseif ($page_id == 2) {
  render_about_page();
} elseif ($page_id == 3) {
  render_services_page();
} elseif ($page_id == 4) {
  render_weather_page();
} elseif ($page_id == 5) {
  render_news_page();
}

print "thank you for visiting!";
