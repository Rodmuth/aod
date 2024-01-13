#####################
# Country main data #
#####################

country =
{ tag                    = U09
  capital                = 1820
  puppet = ENG
  control = ENG
  manpower               = 0.9
  # Resource Reserves
  energy                 = 100
  metal                  = 100
  rare_materials         = 50
  oil                    = 50
  supplies               = 50
  money                  = 10
  transports             = 10
  escorts                = 0
  diplomacy =
  { 
	relation = { tag = ENG value = 200 }
  }

  nationalprovinces      = { 1820 }

  ownedprovinces         = { 1820 }

  controlledprovinces    = { 1820 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 6010 5080 5090 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 8
    defense_lobby     = 6
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 9109901 }
  headofgovernment       = { type = 9 id = 9109902 }
  foreignminister        = { type = 9 id = 9109903 }
  armamentminister       = { type = 9 id = 9109904 }
  ministerofsecurity     = { type = 9 id = 9109905 }
  ministerofintelligence = { type = 9 id = 9109906 }
  chiefofstaff           = { type = 9 id = 9109907 }
  chiefofarmy            = { type = 9 id = 9109908 }
  chiefofnavy            = { type = 9 id = 9109909 }
  chiefofair             = { type = 9 id = 9109910 }
  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_conformism" 
	nationalculture = "policy_culture_enterprise"
	province_development = { 
		id = { type = 11099 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1820 
		cost = 2.0000 
		date = { 
			year = 1960 
			month = march 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2869 
		days_for_first = 272 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

