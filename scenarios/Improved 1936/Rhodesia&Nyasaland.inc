#####################
# Country main data #
#####################

country =
{ tag                    = RHO
  capital                = 1126
  puppet = ENG
  control = ENG
  manpower               = 20.8000
  # Resource Reserves

  free                   = { }
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 0
  supplies               = 200
  money                  = 20
  transports             = 10
  escorts                = 0
  diplomacy =
  { 
	relation = { tag = ENG value = 200 }
	relation = { tag = SAF value = 200 }
  }

  nationalprovinces      = { 1124 1125 1104 1099 1129 1126 1128 }

  ownedprovinces         = { 1124 1125 1104 1099 1129 1126 1128 }

  controlledprovinces    = { 1124 1125 1104 1099 1129 1126 1128 }

  techapps               = { 5080 5090 6010 6030 1010 1190 2450 14000 9010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 10
    free_market       = 8
    professional_army = 7
    defense_lobby     = 3
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 553001 }
  headofgovernment       = { type = 9 id = 553002 }
  foreignminister        = { type = 9 id = 553003 }
  armamentminister       = { type = 9 id = 553004 }
  ministerofsecurity     = { type = 9 id = 553005 }
  ministerofintelligence = { type = 9 id = 553006 }
  chiefofstaff           = { type = 9 id = 553007 }
  chiefofarmy            = { type = 9 id = 553008 }
  chiefofnavy            = { type = 9 id = 553009 }
  chiefofair             = { type = 9 id = 553010 }

  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_enterprise" 
	nationalculture = "policy_culture_enterprise"

	province_development = { 
		id = { type = 11030 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1129 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32
		done = 0 
		days = 2245 
		days_for_first = 112 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11030 id = 2 } 
		name = "" 
		progress = 0.0000 
		location = 1126 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32
		done = 0 
		days = 2245 
		days_for_first = 112 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

