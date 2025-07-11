#include "html.h"

const char *htmlWebPageForm = R"======(
<!DOCTYPE html>
<html>
<head>
	<title>Nimbus Glow setup</title>
</head>
<body>
	<h1>Setup Nimbus Glow</h1>
	
	<p>
		Internet connectivity is needed to automatically synchronize date, time and obtain current weather in your city.<br>
		Please fill the form out.
	</p>
	
	<form action="/action_page.php">
		<label for="ssid"><b>WIFI NAME</b></label><br>
		<input type="text" id="ssid" name="ssid"><br><br>
		
		<label for="pwd"><b>WIFI PASSWORD</b></label><br>
		<input type="text" id="pwd" name="pwd"><br><br>
		
		<input type="radio" id="cityAndCountryCodeRadio" name="location" value="cityAndCountryCode" onchange="checkRadioButtons()" checked>
		<label for="cityAndCountryCodeRadio">Country & City</label><br>
		<input type="radio" id="latLonRadio" name="location" value="latLon" onchange="checkRadioButtons()">
		<label for="latLonRadio">Latitude & Longitude</label><br><br>
		
		<div id="cityAndCountryCodeDiv">
			<label for="country-code"><b>COUNTRY</b></label><br>
			<select id="country-code" name="country-code">
				<option value="AF">Afghanistan</option>
				<option value="AX">Aland Islands</option>
				<option value="AL">Albania</option>
				<option value="DZ">Algeria</option>
				<option value="AS">American Samoa</option>
				<option value="AD">Andorra</option>
				<option value="AO">Angola</option>
				<option value="AI">Anguilla</option>
				<option value="AQ">Antarctica</option>
				<option value="AG">Antigua And Barbuda</option>
				<option value="AR">Argentina</option>
				<option value="AM">Armenia</option>
				<option value="AW">Aruba</option>
				<option value="AU">Australia</option>
				<option value="AT">Austria</option>
				<option value="AZ">Azerbaijan</option>
				<option value="BS">Bahamas</option>
				<option value="BH">Bahrain</option>
				<option value="BD">Bangladesh</option>
				<option value="BB">Barbados</option>
				<option value="BY">Belarus</option>
				<option value="BE">Belgium</option>
				<option value="BZ">Belize</option>
				<option value="BJ">Benin</option>
				<option value="BM">Bermuda</option>
				<option value="BT">Bhutan</option>
				<option value="BO">Bolivia</option>
				<option value="BA">Bosnia And Herzegovina</option>
				<option value="BW">Botswana</option>
				<option value="BV">Bouvet Island</option>
				<option value="BR">Brazil</option>
				<option value="IO">British Indian Ocean Territory</option>
				<option value="BN">Brunei Darussalam</option>
				<option value="BG">Bulgaria</option>
				<option value="BF">Burkina Faso</option>
				<option value="BI">Burundi</option>
				<option value="KH">Cambodia</option>
				<option value="CM">Cameroon</option>
				<option value="CA">Canada</option>
				<option value="CV">Cape Verde</option>
				<option value="KY">Cayman Islands</option>
				<option value="CF">Central African Republic</option>
				<option value="TD">Chad</option>
				<option value="CL">Chile</option>
				<option value="CN">China</option>
				<option value="CX">Christmas Island</option>
				<option value="CC">Cocos (Keeling) Islands</option>
				<option value="CO">Colombia</option>
				<option value="KM">Comoros</option>
				<option value="CG">Congo</option>
				<option value="CD">Congo, Democratic Republic</option>
				<option value="CK">Cook Islands</option>
				<option value="CR">Costa Rica</option>
				<option value="CI">Cote D"Ivoire</option>
				<option value="HR">Croatia</option>
				<option value="CU">Cuba</option>
				<option value="CY">Cyprus</option>
				<option value="CZ">Czech Republic</option>
				<option value="DK">Denmark</option>
				<option value="DJ">Djibouti</option>
				<option value="DM">Dominica</option>
				<option value="DO">Dominican Republic</option>
				<option value="EC">Ecuador</option>
				<option value="EG">Egypt</option>
				<option value="SV">El Salvador</option>
				<option value="GQ">Equatorial Guinea</option>
				<option value="ER">Eritrea</option>
				<option value="EE">Estonia</option>
				<option value="ET">Ethiopia</option>
				<option value="FK">Falkland Islands (Malvinas)</option>
				<option value="FO">Faroe Islands</option>
				<option value="FJ">Fiji</option>
				<option value="FI">Finland</option>
				<option value="FR">France</option>
				<option value="GF">French Guiana</option>
				<option value="PF">French Polynesia</option>
				<option value="TF">French Southern Territories</option>
				<option value="GA">Gabon</option>
				<option value="GM">Gambia</option>
				<option value="GE">Georgia</option>
				<option value="DE">Germany</option>
				<option value="GH">Ghana</option>
				<option value="GI">Gibraltar</option>
				<option value="GR">Greece</option>
				<option value="GL">Greenland</option>
				<option value="GD">Grenada</option>
				<option value="GP">Guadeloupe</option>
				<option value="GU">Guam</option>
				<option value="GT">Guatemala</option>
				<option value="GG">Guernsey</option>
				<option value="GN">Guinea</option>
				<option value="GW">Guinea-Bissau</option>
				<option value="GY">Guyana</option>
				<option value="HT">Haiti</option>
				<option value="HM">Heard Island & Mcdonald Islands</option>
				<option value="VA">Holy See (Vatican City State)</option>
				<option value="HN">Honduras</option>
				<option value="HK">Hong Kong</option>
				<option value="HU">Hungary</option>
				<option value="IS">Iceland</option>
				<option value="IN">India</option>
				<option value="ID">Indonesia</option>
				<option value="IR">Iran, Islamic Republic Of</option>
				<option value="IQ">Iraq</option>
				<option value="IE">Ireland</option>
				<option value="IM">Isle Of Man</option>
				<option value="IL">Israel</option>
				<option value="IT">Italy</option>
				<option value="JM">Jamaica</option>
				<option value="JP">Japan</option>
				<option value="JE">Jersey</option>
				<option value="JO">Jordan</option>
				<option value="KZ">Kazakhstan</option>
				<option value="KE">Kenya</option>
				<option value="KI">Kiribati</option>
				<option value="KR">Korea</option>
				<option value="KP">North Korea</option>
				<option value="KW">Kuwait</option>
				<option value="KG">Kyrgyzstan</option>
				<option value="LA">Lao People"s Democratic Republic</option>
				<option value="LV">Latvia</option>
				<option value="LB">Lebanon</option>
				<option value="LS">Lesotho</option>
				<option value="LR">Liberia</option>
				<option value="LY">Libyan Arab Jamahiriya</option>
				<option value="LI">Liechtenstein</option>
				<option value="LT">Lithuania</option>
				<option value="LU">Luxembourg</option>
				<option value="MO">Macao</option>
				<option value="MK">Macedonia</option>
				<option value="MG">Madagascar</option>
				<option value="MW">Malawi</option>
				<option value="MY">Malaysia</option>
				<option value="MV">Maldives</option>
				<option value="ML">Mali</option>
				<option value="MT">Malta</option>
				<option value="MH">Marshall Islands</option>
				<option value="MQ">Martinique</option>
				<option value="MR">Mauritania</option>
				<option value="MU">Mauritius</option>
				<option value="YT">Mayotte</option>
				<option value="MX">Mexico</option>
				<option value="FM">Micronesia, Federated States Of</option>
				<option value="MD">Moldova</option>
				<option value="MC">Monaco</option>
				<option value="MN">Mongolia</option>
				<option value="ME">Montenegro</option>
				<option value="MS">Montserrat</option>
				<option value="MA">Morocco</option>
				<option value="MZ">Mozambique</option>
				<option value="MM">Myanmar</option>
				<option value="NA">Namibia</option>
				<option value="NR">Nauru</option>
				<option value="NP">Nepal</option>
				<option value="NL">Netherlands</option>
				<option value="AN">Netherlands Antilles</option>
				<option value="NC">New Caledonia</option>
				<option value="NZ">New Zealand</option>
				<option value="NI">Nicaragua</option>
				<option value="NE">Niger</option>
				<option value="NG">Nigeria</option>
				<option value="NU">Niue</option>
				<option value="NF">Norfolk Island</option>
				<option value="MP">Northern Mariana Islands</option>
				<option value="NO">Norway</option>
				<option value="OM">Oman</option>
				<option value="PK">Pakistan</option>
				<option value="PW">Palau</option>
				<option value="PS">Palestinian Territory, Occupied</option>
				<option value="PA">Panama</option>
				<option value="PG">Papua New Guinea</option>
				<option value="PY">Paraguay</option>
				<option value="PE">Peru</option>
				<option value="PH">Philippines</option>
				<option value="PN">Pitcairn</option>
				<option value="PL">Poland</option>
				<option value="PT">Portugal</option>
				<option value="PR">Puerto Rico</option>
				<option value="QA">Qatar</option>
				<option value="RE">Reunion</option>
				<option value="RO">Romania</option>
				<option value="RU">Russian Federation</option>
				<option value="RW">Rwanda</option>
				<option value="BL">Saint Barthelemy</option>
				<option value="SH">Saint Helena</option>
				<option value="KN">Saint Kitts And Nevis</option>
				<option value="LC">Saint Lucia</option>
				<option value="MF">Saint Martin</option>
				<option value="PM">Saint Pierre And Miquelon</option>
				<option value="VC">Saint Vincent And Grenadines</option>
				<option value="WS">Samoa</option>
				<option value="SM">San Marino</option>
				<option value="ST">Sao Tome And Principe</option>
				<option value="SA">Saudi Arabia</option>
				<option value="SN">Senegal</option>
				<option value="RS">Serbia</option>
				<option value="SC">Seychelles</option>
				<option value="SL">Sierra Leone</option>
				<option value="SG">Singapore</option>
				<option value="SK">Slovakia</option>
				<option value="SI">Slovenia</option>
				<option value="SB">Solomon Islands</option>
				<option value="SO">Somalia</option>
				<option value="ZA">South Africa</option>
				<option value="GS">South Georgia And Sandwich Isl.</option>
				<option value="ES">Spain</option>
				<option value="LK">Sri Lanka</option>
				<option value="SD">Sudan</option>
				<option value="SR">Suriname</option>
				<option value="SJ">Svalbard And Jan Mayen</option>
				<option value="SZ">Swaziland</option>
				<option value="SE">Sweden</option>
				<option value="CH">Switzerland</option>
				<option value="SY">Syrian Arab Republic</option>
				<option value="TW">Taiwan</option>
				<option value="TJ">Tajikistan</option>
				<option value="TZ">Tanzania</option>
				<option value="TH">Thailand</option>
				<option value="TL">Timor-Leste</option>
				<option value="TG">Togo</option>
				<option value="TK">Tokelau</option>
				<option value="TO">Tonga</option>
				<option value="TT">Trinidad And Tobago</option>
				<option value="TN">Tunisia</option>
				<option value="TR">Turkey</option>
				<option value="TM">Turkmenistan</option>
				<option value="TC">Turks And Caicos Islands</option>
				<option value="TV">Tuvalu</option>
				<option value="UG">Uganda</option>
				<option value="UA">Ukraine</option>
				<option value="AE">United Arab Emirates</option>
				<option value="GB">United Kingdom</option>
				<option value="US">United States</option>
				<option value="UM">United States Outlying Islands</option>
				<option value="UY">Uruguay</option>
				<option value="UZ">Uzbekistan</option>
				<option value="VU">Vanuatu</option>
				<option value="VE">Venezuela</option>
				<option value="VN">Vietnam</option>
				<option value="VG">Virgin Islands, British</option>
				<option value="VI">Virgin Islands, U.S.</option>
				<option value="WF">Wallis And Futuna</option>
				<option value="EH">Western Sahara</option>
				<option value="YE">Yemen</option>
				<option value="ZM">Zambia</option>
				<option value="ZW">Zimbabwe</option>
			</select><br><br>
		
			<label for="city"><b>CITY</b></label><br>
			(If your city is not any major city in your country, it is recommended to use latitude and longitude instead)<br>
			<input type="text" id="city" name="city"><br><br>
		</div>
		
		<div id="latLonDiv">
			<label for="lat"><b>LATITUDE</b></label><br>
			<input type="text" id="lat" name="lat"><br><br>
			
			<label for="lon"><b>LONGITUDE</b></label><br>
			<input type="text" id="lon" name="lon"><br><br>
		</div>

		<label for="timezone"><b>TIME ZONE</b></label><br>
		<select id="timezone" name="timezone">
			<option value="GMT0">Africa/Abidjan</option>
			<option value="GMT0">Africa/Accra</option>
			<option value="EAT-3">Africa/Addis_Ababa</option>
			<option value="CET-1">Africa/Algiers</option>
			<option value="EAT-3">Africa/Asmara</option>
			<option value="GMT0">Africa/Bamako</option>
			<option value="WAT-1">Africa/Bangui</option>
			<option value="GMT0">Africa/Banjul</option>
			<option value="GMT0">Africa/Bissau</option>
			<option value="CAT-2">Africa/Blantyre</option>
			<option value="WAT-1">Africa/Brazzaville</option>
			<option value="CAT-2">Africa/Bujumbura</option>
			<option value="EET-2EEST,M4.5.5/0,M10.5.4/24">Africa/Cairo</option>
			<option value="<+01>-1">Africa/Casablanca</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Africa/Ceuta</option>
			<option value="GMT0">Africa/Conakry</option>
			<option value="GMT0">Africa/Dakar</option>
			<option value="EAT-3">Africa/Dar_es_Salaam</option>
			<option value="EAT-3">Africa/Djibouti</option>
			<option value="WAT-1">Africa/Douala</option>
			<option value="<+01>-1">Africa/El_Aaiun</option>
			<option value="GMT0">Africa/Freetown</option>
			<option value="CAT-2">Africa/Gaborone</option>
			<option value="CAT-2">Africa/Harare</option>
			<option value="SAST-2">Africa/Johannesburg</option>
			<option value="CAT-2">Africa/Juba</option>
			<option value="EAT-3">Africa/Kampala</option>
			<option value="CAT-2">Africa/Khartoum</option>
			<option value="CAT-2">Africa/Kigali</option>
			<option value="WAT-1">Africa/Kinshasa</option>
			<option value="WAT-1">Africa/Lagos</option>
			<option value="WAT-1">Africa/Libreville</option>
			<option value="GMT0">Africa/Lome</option>
			<option value="WAT-1">Africa/Luanda</option>
			<option value="CAT-2">Africa/Lubumbashi</option>
			<option value="CAT-2">Africa/Lusaka</option>
			<option value="WAT-1">Africa/Malabo</option>
			<option value="CAT-2">Africa/Maputo</option>
			<option value="SAST-2">Africa/Maseru</option>
			<option value="SAST-2">Africa/Mbabane</option>
			<option value="EAT-3">Africa/Mogadishu</option>
			<option value="GMT0">Africa/Monrovia</option>
			<option value="EAT-3">Africa/Nairobi</option>
			<option value="WAT-1">Africa/Ndjamena</option>
			<option value="WAT-1">Africa/Niamey</option>
			<option value="GMT0">Africa/Nouakchott</option>
			<option value="GMT0">Africa/Ouagadougou</option>
			<option value="WAT-1">Africa/Porto-Novo</option>
			<option value="GMT0">Africa/Sao_Tome</option>
			<option value="EET-2">Africa/Tripoli</option>
			<option value="CET-1">Africa/Tunis</option>
			<option value="CAT-2">Africa/Windhoek</option>
			<option value="HST10HDT,M3.2.0,M11.1.0">America/Adak</option>
			<option value="AKST9AKDT,M3.2.0,M11.1.0">America/Anchorage</option>
			<option value="AST4">America/Anguilla</option>
			<option value="AST4">America/Antigua</option>
			<option value="<-03>3">America/Araguaina</option>
			<option value="<-03>3">America/Argentina/Buenos_Aires</option>
			<option value="<-03>3">America/Argentina/Catamarca</option>
			<option value="<-03>3">America/Argentina/Cordoba</option>
			<option value="<-03>3">America/Argentina/Jujuy</option>
			<option value="<-03>3">America/Argentina/La_Rioja</option>
			<option value="<-03>3">America/Argentina/Mendoza</option>
			<option value="<-03>3">America/Argentina/Rio_Gallegos</option>
			<option value="<-03>3">America/Argentina/Salta</option>
			<option value="<-03>3">America/Argentina/San_Juan</option>
			<option value="<-03>3">America/Argentina/San_Luis</option>
			<option value="<-03>3">America/Argentina/Tucuman</option>
			<option value="<-03>3">America/Argentina/Ushuaia</option>
			<option value="AST4">America/Aruba</option>
			<option value="<-04>4<-03>,M10.1.0/0,M3.4.0/0">America/Asuncion</option>
			<option value="EST5">America/Atikokan</option>
			<option value="<-03>3">America/Bahia</option>
			<option value="CST6">America/Bahia_Banderas</option>
			<option value="AST4">America/Barbados</option>
			<option value="<-03>3">America/Belem</option>
			<option value="CST6">America/Belize</option>
			<option value="AST4">America/Blanc-Sablon</option>
			<option value="<-04>4">America/Boa_Vista</option>
			<option value="<-05>5">America/Bogota</option>
			<option value="MST7MDT,M3.2.0,M11.1.0">America/Boise</option>
			<option value="MST7MDT,M3.2.0,M11.1.0">America/Cambridge_Bay</option>
			<option value="<-04>4">America/Campo_Grande</option>
			<option value="EST5">America/Cancun</option>
			<option value="<-04>4">America/Caracas</option>
			<option value="<-03>3">America/Cayenne</option>
			<option value="EST5">America/Cayman</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Chicago</option>
			<option value="CST6">America/Chihuahua</option>
			<option value="CST6">America/Costa_Rica</option>
			<option value="MST7">America/Creston</option>
			<option value="<-04>4">America/Cuiaba</option>
			<option value="AST4">America/Curacao</option>
			<option value="GMT0">America/Danmarkshavn</option>
			<option value="MST7">America/Dawson</option>
			<option value="MST7">America/Dawson_Creek</option>
			<option value="MST7MDT,M3.2.0,M11.1.0">America/Denver</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Detroit</option>
			<option value="AST4">America/Dominica</option>
			<option value="MST7MDT,M3.2.0,M11.1.0">America/Edmonton</option>
			<option value="<-05>5">America/Eirunepe</option>
			<option value="CST6">America/El_Salvador</option>
			<option value="MST7">America/Fort_Nelson</option>
			<option value="<-03>3">America/Fortaleza</option>
			<option value="AST4ADT,M3.2.0,M11.1.0">America/Glace_Bay</option>
			<option value="<-02>2<-01>,M3.5.0/-1,M10.5.0/0">America/Godthab</option>
			<option value="AST4ADT,M3.2.0,M11.1.0">America/Goose_Bay</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Grand_Turk</option>
			<option value="AST4">America/Grenada</option>
			<option value="AST4">America/Guadeloupe</option>
			<option value="CST6">America/Guatemala</option>
			<option value="<-05>5">America/Guayaquil</option>
			<option value="<-04>4">America/Guyana</option>
			<option value="AST4ADT,M3.2.0,M11.1.0">America/Halifax</option>
			<option value="CST5CDT,M3.2.0/0,M11.1.0/1">America/Havana</option>
			<option value="MST7">America/Hermosillo</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Indiana/Indianapolis</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Indiana/Knox</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Indiana/Marengo</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Indiana/Petersburg</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Indiana/Tell_City</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Indiana/Vevay</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Indiana/Vincennes</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Indiana/Winamac</option>
			<option value="MST7MDT,M3.2.0,M11.1.0">America/Inuvik</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Iqaluit</option>
			<option value="EST5">America/Jamaica</option>
			<option value="AKST9AKDT,M3.2.0,M11.1.0">America/Juneau</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Kentucky/Louisville</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Kentucky/Monticello</option>
			<option value="AST4">America/Kralendijk</option>
			<option value="<-04>4">America/La_Paz</option>
			<option value="<-05>5">America/Lima</option>
			<option value="PST8PDT,M3.2.0,M11.1.0">America/Los_Angeles</option>
			<option value="AST4">America/Lower_Princes</option>
			<option value="<-03>3">America/Maceio</option>
			<option value="CST6">America/Managua</option>
			<option value="<-04>4">America/Manaus</option>
			<option value="AST4">America/Marigot</option>
			<option value="AST4">America/Martinique</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Matamoros</option>
			<option value="MST7">America/Mazatlan</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Menominee</option>
			<option value="CST6">America/Merida</option>
			<option value="AKST9AKDT,M3.2.0,M11.1.0">America/Metlakatla</option>
			<option value="CST6">America/Mexico_City</option>
			<option value="<-03>3<-02>,M3.2.0,M11.1.0">America/Miquelon</option>
			<option value="AST4ADT,M3.2.0,M11.1.0">America/Moncton</option>
			<option value="CST6">America/Monterrey</option>
			<option value="<-03>3">America/Montevideo</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Montreal</option>
			<option value="AST4">America/Montserrat</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Nassau</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/New_York</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Nipigon</option>
			<option value="AKST9AKDT,M3.2.0,M11.1.0">America/Nome</option>
			<option value="<-02>2">America/Noronha</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/North_Dakota/Beulah</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/North_Dakota/Center</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/North_Dakota/New_Salem</option>
			<option value="<-02>2<-01>,M3.5.0/-1,M10.5.0/0">America/Nuuk</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Ojinaga</option>
			<option value="EST5">America/Panama</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Pangnirtung</option>
			<option value="<-03>3">America/Paramaribo</option>
			<option value="MST7">America/Phoenix</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Port-au-Prince</option>
			<option value="AST4">America/Port_of_Spain</option>
			<option value="<-04>4">America/Porto_Velho</option>
			<option value="AST4">America/Puerto_Rico</option>
			<option value="<-03>3">America/Punta_Arenas</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Rainy_River</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Rankin_Inlet</option>
			<option value="<-03>3">America/Recife</option>
			<option value="CST6">America/Regina</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Resolute</option>
			<option value="<-05>5">America/Rio_Branco</option>
			<option value="<-03>3">America/Santarem</option>
			<option value="<-04>4<-03>,M9.1.6/24,M4.1.6/24">America/Santiago</option>
			<option value="AST4">America/Santo_Domingo</option>
			<option value="<-03>3">America/Sao_Paulo</option>
			<option value="<-01>1<+00>,M3.5.0/0,M10.5.0/1">America/Scoresbysund</option>
			<option value="AKST9AKDT,M3.2.0,M11.1.0">America/Sitka</option>
			<option value="AST4">America/St_Barthelemy</option>
			<option value="NST3:30NDT,M3.2.0,M11.1.0">America/St_Johns</option>
			<option value="AST4">America/St_Kitts</option>
			<option value="AST4">America/St_Lucia</option>
			<option value="AST4">America/St_Thomas</option>
			<option value="AST4">America/St_Vincent</option>
			<option value="CST6">America/Swift_Current</option>
			<option value="CST6">America/Tegucigalpa</option>
			<option value="AST4ADT,M3.2.0,M11.1.0">America/Thule</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Thunder_Bay</option>
			<option value="PST8PDT,M3.2.0,M11.1.0">America/Tijuana</option>
			<option value="EST5EDT,M3.2.0,M11.1.0">America/Toronto</option>
			<option value="AST4">America/Tortola</option>
			<option value="PST8PDT,M3.2.0,M11.1.0">America/Vancouver</option>
			<option value="MST7">America/Whitehorse</option>
			<option value="CST6CDT,M3.2.0,M11.1.0">America/Winnipeg</option>
			<option value="AKST9AKDT,M3.2.0,M11.1.0">America/Yakutat</option>
			<option value="MST7MDT,M3.2.0,M11.1.0">America/Yellowknife</option>
			<option value="<+11>-11">Antarctica/Casey</option>
			<option value="<+07>-7">Antarctica/Davis</option>
			<option value="<+10>-10">Antarctica/DumontDUrville</option>
			<option value="AEST-10AEDT,M10.1.0,M4.1.0/3">Antarctica/Macquarie</option>
			<option value="<+05>-5">Antarctica/Mawson</option>
			<option value="NZST-12NZDT,M9.5.0,M4.1.0/3">Antarctica/McMurdo</option>
			<option value="<-03>3">Antarctica/Palmer</option>
			<option value="<-03>3">Antarctica/Rothera</option>
			<option value="<+03>-3">Antarctica/Syowa</option>
			<option value="<+00>0<+02>-2,M3.5.0/1,M10.5.0/3">Antarctica/Troll</option>
			<option value="<+06>-6">Antarctica/Vostok</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Arctic/Longyearbyen</option>
			<option value="<+03>-3">Asia/Aden</option>
			<option value="<+06>-6">Asia/Almaty</option>
			<option value="<+03>-3">Asia/Amman</option>
			<option value="<+12>-12">Asia/Anadyr</option>
			<option value="<+05>-5">Asia/Aqtau</option>
			<option value="<+05>-5">Asia/Aqtobe</option>
			<option value="<+05>-5">Asia/Ashgabat</option>
			<option value="<+05>-5">Asia/Atyrau</option>
			<option value="<+03>-3">Asia/Baghdad</option>
			<option value="<+03>-3">Asia/Bahrain</option>
			<option value="<+04>-4">Asia/Baku</option>
			<option value="<+07>-7">Asia/Bangkok</option>
			<option value="<+07>-7">Asia/Barnaul</option>
			<option value="EET-2EEST,M3.5.0/0,M10.5.0/0">Asia/Beirut</option>
			<option value="<+06>-6">Asia/Bishkek</option>
			<option value="<+08>-8">Asia/Brunei</option>
			<option value="<+09>-9">Asia/Chita</option>
			<option value="<+08>-8">Asia/Choibalsan</option>
			<option value="<+0530>-5:30">Asia/Colombo</option>
			<option value="<+03>-3">Asia/Damascus</option>
			<option value="<+06>-6">Asia/Dhaka</option>
			<option value="<+09>-9">Asia/Dili</option>
			<option value="<+04>-4">Asia/Dubai</option>
			<option value="<+05>-5">Asia/Dushanbe</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Asia/Famagusta</option>
			<option value="EET-2EEST,M3.4.4/50,M10.4.4/50">Asia/Gaza</option>
			<option value="EET-2EEST,M3.4.4/50,M10.4.4/50">Asia/Hebron</option>
			<option value="<+07>-7">Asia/Ho_Chi_Minh</option>
			<option value="HKT-8">Asia/Hong_Kong</option>
			<option value="<+07>-7">Asia/Hovd</option>
			<option value="<+08>-8">Asia/Irkutsk</option>
			<option value="WIB-7">Asia/Jakarta</option>
			<option value="WIT-9">Asia/Jayapura</option>
			<option value="IST-2IDT,M3.4.4/26,M10.5.0">Asia/Jerusalem</option>
			<option value="<+0430>-4:30">Asia/Kabul</option>
			<option value="<+12>-12">Asia/Kamchatka</option>
			<option value="PKT-5">Asia/Karachi</option>
			<option value="<+0545>-5:45">Asia/Kathmandu</option>
			<option value="<+09>-9">Asia/Khandyga</option>
			<option value="IST-5:30">Asia/Kolkata</option>
			<option value="<+07>-7">Asia/Krasnoyarsk</option>
			<option value="<+08>-8">Asia/Kuala_Lumpur</option>
			<option value="<+08>-8">Asia/Kuching</option>
			<option value="<+03>-3">Asia/Kuwait</option>
			<option value="CST-8">Asia/Macau</option>
			<option value="<+11>-11">Asia/Magadan</option>
			<option value="WITA-8">Asia/Makassar</option>
			<option value="PST-8">Asia/Manila</option>
			<option value="<+04>-4">Asia/Muscat</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Asia/Nicosia</option>
			<option value="<+07>-7">Asia/Novokuznetsk</option>
			<option value="<+07>-7">Asia/Novosibirsk</option>
			<option value="<+06>-6">Asia/Omsk</option>
			<option value="<+05>-5">Asia/Oral</option>
			<option value="<+07>-7">Asia/Phnom_Penh</option>
			<option value="WIB-7">Asia/Pontianak</option>
			<option value="KST-9">Asia/Pyongyang</option>
			<option value="<+03>-3">Asia/Qatar</option>
			<option value="<+05>-5">Asia/Qyzylorda</option>
			<option value="<+03>-3">Asia/Riyadh</option>
			<option value="<+11>-11">Asia/Sakhalin</option>
			<option value="<+05>-5">Asia/Samarkand</option>
			<option value="KST-9">Asia/Seoul</option>
			<option value="CST-8">Asia/Shanghai</option>
			<option value="<+08>-8">Asia/Singapore</option>
			<option value="<+11>-11">Asia/Srednekolymsk</option>
			<option value="CST-8">Asia/Taipei</option>
			<option value="<+05>-5">Asia/Tashkent</option>
			<option value="<+04>-4">Asia/Tbilisi</option>
			<option value="<+0330>-3:30">Asia/Tehran</option>
			<option value="<+06>-6">Asia/Thimphu</option>
			<option value="JST-9">Asia/Tokyo</option>
			<option value="<+07>-7">Asia/Tomsk</option>
			<option value="<+08>-8">Asia/Ulaanbaatar</option>
			<option value="<+06>-6">Asia/Urumqi</option>
			<option value="<+10>-10">Asia/Ust-Nera</option>
			<option value="<+07>-7">Asia/Vientiane</option>
			<option value="<+10>-10">Asia/Vladivostok</option>
			<option value="<+09>-9">Asia/Yakutsk</option>
			<option value="<+0630>-6:30">Asia/Yangon</option>
			<option value="<+05>-5">Asia/Yekaterinburg</option>
			<option value="<+04>-4">Asia/Yerevan</option>
			<option value="<-01>1<+00>,M3.5.0/0,M10.5.0/1">Atlantic/Azores</option>
			<option value="AST4ADT,M3.2.0,M11.1.0">Atlantic/Bermuda</option>
			<option value="WET0WEST,M3.5.0/1,M10.5.0">Atlantic/Canary</option>
			<option value="<-01>1">Atlantic/Cape_Verde</option>
			<option value="WET0WEST,M3.5.0/1,M10.5.0">Atlantic/Faroe</option>
			<option value="WET0WEST,M3.5.0/1,M10.5.0">Atlantic/Madeira</option>
			<option value="GMT0">Atlantic/Reykjavik</option>
			<option value="<-02>2">Atlantic/South_Georgia</option>
			<option value="GMT0">Atlantic/St_Helena</option>
			<option value="<-03>3">Atlantic/Stanley</option>
			<option value="ACST-9:30ACDT,M10.1.0,M4.1.0/3">Australia/Adelaide</option>
			<option value="AEST-10">Australia/Brisbane</option>
			<option value="ACST-9:30ACDT,M10.1.0,M4.1.0/3">Australia/Broken_Hill</option>
			<option value="AEST-10AEDT,M10.1.0,M4.1.0/3">Australia/Currie</option>
			<option value="ACST-9:30">Australia/Darwin</option>
			<option value="<+0845>-8:45">Australia/Eucla</option>
			<option value="AEST-10AEDT,M10.1.0,M4.1.0/3">Australia/Hobart</option>
			<option value="AEST-10">Australia/Lindeman</option>
			<option value="<+1030>-10:30<+11>-11,M10.1.0,M4.1.0">Australia/Lord_Howe</option>
			<option value="AEST-10AEDT,M10.1.0,M4.1.0/3">Australia/Melbourne</option>
			<option value="AWST-8">Australia/Perth</option>
			<option value="AEST-10AEDT,M10.1.0,M4.1.0/3">Australia/Sydney</option>
			<option value="GMT0">Etc/GMT</option>
			<option value="GMT0">Etc/GMT+0</option>
			<option value="<-01>1">Etc/GMT+1</option>
			<option value="<-10>10">Etc/GMT+10</option>
			<option value="<-11>11">Etc/GMT+11</option>
			<option value="<-12>12">Etc/GMT+12</option>
			<option value="<-02>2">Etc/GMT+2</option>
			<option value="<-03>3">Etc/GMT+3</option>
			<option value="<-04>4">Etc/GMT+4</option>
			<option value="<-05>5">Etc/GMT+5</option>
			<option value="<-06>6">Etc/GMT+6</option>
			<option value="<-07>7">Etc/GMT+7</option>
			<option value="<-08>8">Etc/GMT+8</option>
			<option value="<-09>9">Etc/GMT+9</option>
			<option value="GMT0">Etc/GMT-0</option>
			<option value="<+01>-1">Etc/GMT-1</option>
			<option value="<+10>-10">Etc/GMT-10</option>
			<option value="<+11>-11">Etc/GMT-11</option>
			<option value="<+12>-12">Etc/GMT-12</option>
			<option value="<+13>-13">Etc/GMT-13</option>
			<option value="<+14>-14">Etc/GMT-14</option>
			<option value="<+02>-2">Etc/GMT-2</option>
			<option value="<+03>-3">Etc/GMT-3</option>
			<option value="<+04>-4">Etc/GMT-4</option>
			<option value="<+05>-5">Etc/GMT-5</option>
			<option value="<+06>-6">Etc/GMT-6</option>
			<option value="<+07>-7">Etc/GMT-7</option>
			<option value="<+08>-8">Etc/GMT-8</option>
			<option value="<+09>-9">Etc/GMT-9</option>
			<option value="GMT0">Etc/GMT0</option>
			<option value="GMT0">Etc/Greenwich</option>
			<option value="UTC0">Etc/UCT</option>
			<option value="UTC0">Etc/UTC</option>
			<option value="UTC0">Etc/Universal</option>
			<option value="UTC0">Etc/Zulu</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Amsterdam</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Andorra</option>
			<option value="<+04>-4">Europe/Astrakhan</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Athens</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Belgrade</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Berlin</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Bratislava</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Brussels</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Bucharest</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Budapest</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Busingen</option>
			<option value="EET-2EEST,M3.5.0,M10.5.0/3">Europe/Chisinau</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Copenhagen</option>
			<option value="IST-1GMT0,M10.5.0,M3.5.0/1">Europe/Dublin</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Gibraltar</option>
			<option value="GMT0BST,M3.5.0/1,M10.5.0">Europe/Guernsey</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Helsinki</option>
			<option value="GMT0BST,M3.5.0/1,M10.5.0">Europe/Isle_of_Man</option>
			<option value="<+03>-3">Europe/Istanbul</option>
			<option value="GMT0BST,M3.5.0/1,M10.5.0">Europe/Jersey</option>
			<option value="EET-2">Europe/Kaliningrad</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Kiev</option>
			<option value="MSK-3">Europe/Kirov</option>
			<option value="WET0WEST,M3.5.0/1,M10.5.0">Europe/Lisbon</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Ljubljana</option>
			<option value="GMT0BST,M3.5.0/1,M10.5.0">Europe/London</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Luxembourg</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Madrid</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Malta</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Mariehamn</option>
			<option value="<+03>-3">Europe/Minsk</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Monaco</option>
			<option value="MSK-3">Europe/Moscow</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Oslo</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Paris</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Podgorica</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Prague</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Riga</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Rome</option>
			<option value="<+04>-4">Europe/Samara</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/San_Marino</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Sarajevo</option>
			<option value="<+04>-4">Europe/Saratov</option>
			<option value="MSK-3">Europe/Simferopol</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Skopje</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Sofia</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Stockholm</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Tallinn</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Tirane</option>
			<option value="<+04>-4">Europe/Ulyanovsk</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Uzhgorod</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Vaduz</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Vatican</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Vienna</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Vilnius</option>
			<option value="MSK-3">Europe/Volgograd</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Warsaw</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Zagreb</option>
			<option value="EET-2EEST,M3.5.0/3,M10.5.0/4">Europe/Zaporozhye</option>
			<option value="CET-1CEST,M3.5.0,M10.5.0/3">Europe/Zurich</option>
			<option value="EAT-3">Indian/Antananarivo</option>
			<option value="<+06>-6">Indian/Chagos</option>
			<option value="<+07>-7">Indian/Christmas</option>
			<option value="<+0630>-6:30">Indian/Cocos</option>
			<option value="EAT-3">Indian/Comoro</option>
			<option value="<+05>-5">Indian/Kerguelen</option>
			<option value="<+04>-4">Indian/Mahe</option>
			<option value="<+05>-5">Indian/Maldives</option>
			<option value="<+04>-4">Indian/Mauritius</option>
			<option value="EAT-3">Indian/Mayotte</option>
			<option value="<+04>-4">Indian/Reunion</option>
			<option value="<+13>-13">Pacific/Apia</option>
			<option value="NZST-12NZDT,M9.5.0,M4.1.0/3">Pacific/Auckland</option>
			<option value="<+11>-11">Pacific/Bougainville</option>
			<option value="<+1245>-12:45<+1345>,M9.5.0/2:45,M4.1.0/3:45">Pacific/Chatham</option>
			<option value="<+10>-10">Pacific/Chuuk</option>
			<option value="<-06>6<-05>,M9.1.6/22,M4.1.6/22">Pacific/Easter</option>
			<option value="<+11>-11">Pacific/Efate</option>
			<option value="<+13>-13">Pacific/Enderbury</option>
			<option value="<+13>-13">Pacific/Fakaofo</option>
			<option value="<+12>-12">Pacific/Fiji</option>
			<option value="<+12>-12">Pacific/Funafuti</option>
			<option value="<-06>6">Pacific/Galapagos</option>
			<option value="<-09>9">Pacific/Gambier</option>
			<option value="<+11>-11">Pacific/Guadalcanal</option>
			<option value="ChST-10">Pacific/Guam</option>
			<option value="HST10">Pacific/Honolulu</option>
			<option value="<+14>-14">Pacific/Kiritimati</option>
			<option value="<+11>-11">Pacific/Kosrae</option>
			<option value="<+12>-12">Pacific/Kwajalein</option>
			<option value="<+12>-12">Pacific/Majuro</option>
			<option value="<-0930>9:30">Pacific/Marquesas</option>
			<option value="SST11">Pacific/Midway</option>
			<option value="<+12>-12">Pacific/Nauru</option>
			<option value="<-11>11">Pacific/Niue</option>
			<option value="<+11>-11<+12>,M10.1.0,M4.1.0/3">Pacific/Norfolk</option>
			<option value="<+11>-11">Pacific/Noumea</option>
			<option value="SST11">Pacific/Pago_Pago</option>
			<option value="<+09>-9">Pacific/Palau</option>
			<option value="<-08>8">Pacific/Pitcairn</option>
			<option value="<+11>-11">Pacific/Pohnpei</option>
			<option value="<+10>-10">Pacific/Port_Moresby</option>
			<option value="<-10>10">Pacific/Rarotonga</option>
			<option value="ChST-10">Pacific/Saipan</option>
			<option value="<-10>10">Pacific/Tahiti</option>
			<option value="<+12>-12">Pacific/Tarawa</option>
			<option value="<+13>-13">Pacific/Tongatapu</option>
			<option value="<+12>-12">Pacific/Wake</option>
			<option value="<+12>-12">Pacific/Wallis</option>
		</select><br><br>

		<label for="api-key"><b>OPENWEATHER API KEY</b></label><br>
		(register and get your API key here <a href="https://openweathermap.org/">https://openweathermap.org/</a>)<br>
		<input type="text" id="api-key" name="api-key"><br><br>
		
		<input type="submit" value="Apply configuration">
	</form>
	
	<script>
		function checkRadioButtons()
		{
			if (document.getElementById("cityAndCountryCodeRadio").checked) 
			{
				document.getElementById("cityAndCountryCodeDiv").style.display = "block";
			} else 
			{
				document.getElementById("cityAndCountryCodeDiv").style.display = "none";
			}
			
			if (document.getElementById("latLonRadio").checked) 
			{
				document.getElementById("latLonDiv").style.display = "block";
			} else 
			{
				document.getElementById("latLonDiv").style.display = "none";
			}
		}
		
		checkRadioButtons(); <!-- Check once after page load -->
	</script>
</body>
</html>
)======";

const char *htmlWebPageCompleteFormatterCityAndCountryCode = R"======(
<!DOCTYPE html>
<html>
<head>
	<title>Nimbus Glow setup</title>
</head>
<body>
	<h1>Setup finished!</h1>
	
	<p>
		<b>WIFI NAME:</b> %s<br>
		<b>WIFI PASSWORD:</b> %s<br>
		<b>CITY:</b> %s<br>
		<b>COUNTRY CODE:</b> %s<br>
		<b>TIME ZONE STRING:</b> %s<br>
		<b>OPENWEATHER API KEY:</b> %s<br>
	</p>
	
	<p>
		<b>Automatically restarting device, please wait.</b><br>
		<b>You can close this tab.</b>
	</p>
</body>
</html>
)======";

const char *htmlWebPageCompleteFormatterLatAndLon = R"======(
<!DOCTYPE html>
<html>
<head>
	<title>Nimbus Glow setup</title>
</head>
<body>
	<h1>Setup finished!</h1>
	
	<p>
		<b>WIFI NAME:</b> %s<br>
		<b>WIFI PASSWORD:</b> %s<br>
		<b>LAT:</b> %s<br>
		<b>LON:</b> %s<br>
		<b>TIME ZONE STRING:</b> %s<br>
		<b>OPENWEATHER API KEY:</b> %s<br>
	</p>
	
	<p>
		<b>Automatically restarting device, please wait.</b><br>
		<b>You can close this tab.</b>
	</p>
</body>
</html>
)======";