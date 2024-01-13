#####################
# Country main data #
#####################

country =
{ tag                    = U91
  capital                = 1822
  puppet = ENG
  control = ENG
  manpower               = 0.9
  # Resource Reserves

  free                   = { }
  energy                 = 400
  metal                  = 400
  rare_materials         = 20
  oil                    = 400
  supplies               = 400
  money                  = 20
  transports             = 10
  escorts                = 0
  diplomacy =
  { 
	relation = { tag = ENG value = 200 }
	relation = { tag = SAU value = -200 }
  }

  nationalprovinces      = { 1822 }

  ownedprovinces         = { 1822 }

  controlledprovinces    = { 1822 }

  techapps               = { 6010 5080 5090 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 5
    freedom           = 1
    free_market       = 5
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 901000 }
  headofgovernment       = { type = 9 id = 901001 }
  foreignminister        = { type = 9 id = 901002 }
  armamentminister       = { type = 9 id = 901003 }
  ministerofsecurity     = { type = 9 id = 901004 }
  ministerofintelligence = { type = 9 id = 901005 }
  chiefofstaff           = { type = 9 id = 901006 }
  chiefofarmy            = { type = 9 id = 901007 }
  chiefofnavy            = { type = 9 id = 901008 }
  chiefofair             = { type = 9 id = 901009 }
  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_conformism" 
	nationalculture = "policy_culture_enterprise"

	province_development = { 
		id = { type = 11016 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1822 
		cost = 2.0000 
		date = { 
			year = 1961 
			month = november 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32
		done = 0 
		days = 2986 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 

}

