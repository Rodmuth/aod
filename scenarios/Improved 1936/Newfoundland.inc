#####################
# Country main data #
#####################
country =
{ tag                    = U27
  capital                = 576
  puppet = ENG
  control = ENG
  energy                 = 200
  metal                  = 300
  rare_materials         = 100
  oil                    = 5
  supplies               = 200
  money                  = 4
  manpower               = 11.9
  transports             = 40
  diplomacy =
  {
    relation = { tag = ENG value = 200 }
    relation = { tag = CAN value = 200 }
  }
	SpyInfo = { country = "U27" NumberOfSpies = 2 }
	SpyInfo = { country = "AST" NumberOfSpies = 1 }
	SpyInfo = { country = "CAN" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "NZL" NumberOfSpies = 1 }
	SpyInfo = { country = "SAF" NumberOfSpies = 1 }
	SpyInfo = { country = "USA" NumberOfSpies = 1 }
  nationalprovinces      = { 575 576 }
  ownedprovinces         = { 575 576 }
  controlledprovinces    = { 575 576 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 3010 8050 5080 5090 6010 6030 1010 1190 2290 2450 14000 }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic			= 10
		political_left		= 2
		freedom 			= 9
		free_market 		= 8
		professional_army	= 4
		defense_lobby		= 2
		interventionism 	= 2
	}
  headofstate            = { type = 9 id = 185001 }
  headofgovernment       = { type = 9 id = 185002 }
  foreignminister        = { type = 9 id = 185003 }
  armamentminister       = { type = 9 id = 185004 }
  ministerofsecurity     = { type = 9 id = 185005 }
  ministerofintelligence = { type = 9 id = 185006 }
  chiefofstaff           = { type = 9 id = 185007 }
  chiefofarmy            = { type = 9 id = 185008 }
  chiefofnavy            = { type = 9 id = 185009 }
  chiefofair             = { type = 9 id = 185010 }
landunit = {
	id = { type = 11000 id = 1 }
	name = "Newfoundland Militia"
	location = 576 #Newfoundland

	division = {
		id = { type = 11100 id = 2 }
		name = "Newfoundland Militia"
		type = garrison
		model = 0
		strength = 25
		}
	}
	province_development = { 
		id = { type = 11100 id = 3  } 
		name = "" 
		progress = 0.0000 
		location = 576 
		cost = 2.0000
		date = { 
			year = 1946 
			month = january 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2391 
		days_for_first = 159 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
