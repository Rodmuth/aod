#####################
# Country main data #
#####################

country =
{ tag                    = ICL
  capital                = 1
  control = DEN
  puppet = DEN
  manpower               = 0.9
  # Resource Reserves
  energy                 = 100
  metal                  = 100
  rare_materials         = 50
  oil                    = 50
  supplies               = 50
  money                  = 0
  transports             = 15
  escorts                = 0
  diplomacy = { 
  relation = { tag = DEN value = 200 }
  relation = { tag = U28 value = 200 }
  }

  nationalprovinces      = { 1 2 }

  ownedprovinces         = { 1 2 }

  controlledprovinces    = { 1 2 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 2450 1010 1110 5010 5020 5080 5090 6010 6020 8050 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 10
    freedom           = 10
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 581001 }
  headofgovernment       = { type = 9 id = 581002 }
  foreignminister        = { type = 9 id = 581003 }
  armamentminister       = { type = 9 id = 581004 }
  ministerofsecurity     = { type = 9 id = 581005 }
  ministerofintelligence = { type = 9 id = 581006 }
  chiefofstaff           = { type = 9 id = 581007 }
  chiefofarmy            = { type = 9 id = 581008 }
  chiefofnavy            = { type = 9 id = 581009 }
  chiefofair             = { type = 9 id = 581010 }
  nationalidentity = "policy_identity_conciliatory" 
	socialpolicy = "policy_social_liberal" 
	nationalculture = "policy_culture_enterprise"

	province_development = { 
		id = { type = 11005 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = june 
			day = 18 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2154 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

