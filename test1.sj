library "release-1.0:https://github.com/justinmann/sj-lib-json.git"

text : "{\r\n    \"title\" : \"This is a title\",\r\n    \"parentalAdvisory\" : \"This is a parental advisory\",\r\n    \"formatList\" : [\r\n        \"Format 1\",\r\n        \"Format 2\"\r\n    ],\r\n    \"hasAdultText\" : true,\r\n    \"strings\" : {\r\n        \"adult_17481\" : \"Adult Text\",\r\n        \"dp_product_info_energy_class\" : \"Energy Class Level\"\r\n    },\r\n    \"energyEfficiencyClass\" : \"Energy Class\"\r\n}"
data : json.load(text).root()

debug.writeLine(data as string)