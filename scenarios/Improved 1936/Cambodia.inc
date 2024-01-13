#####################
# Country main data #
#####################

country =
{ tag                    = CMB
  puppet = FRA
  control = FRA
  capital                = 1340
  # Resource Reserves
  energy                 = 100
  metal                  = 100
  rare_materials         = 50
  oil                    = 50
  supplies               = 50
  money                  = 0
  consumer = 0.3000 
  supply = 0.1900 
  production = 0.5100 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 0.9
  transports             = 10
  escorts                = 0
  diplomacy =
  {
  relation = { tag = FRA value = 200 }
  relation = { tag = VIE value = 200 }
  relation = { tag = LAO value = 200 }
  }
  nationalprovinces      = { 1339 1340 1341 }
  ownedprovinces         = { 1339 1340 1341 }
  controlledprovinces    = { 1339 1340 1341 }
  techapps               = { 1010 6010 6030 1190 5080 5090 1310 2450 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    free_market       = 8
    freedom           = 8
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 541001 }
  headofgovernment       = { type = 9 id = 541002 }
  foreignminister        = { type = 9 id = 541003 }
  armamentminister       = { type = 9 id = 541004 }
  ministerofsecurity     = { type = 9 id = 541005 }
  ministerofintelligence = { type = 9 id = 541006 }
  chiefofstaff           = { type = 9 id = 541007 }
  chiefofarmy            = { type = 9 id = 541008 }
  chiefofnavy            = { type = 9 id = 541009 }
  chiefofair             = { type = 9 id = 541010 }

  nationalidentity = "policy_identity_conciliatory" 
	socialpolicy = "policy_social_enterprise"
	nationalculture = "policy_culture_enterprise"

  # #################
  # ###FRENCH OOB####
  # #################
	province_development = { 
		id = { type = 11013 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1340 
		cost = 2.0000 
		date = { 
			year = 1952 
			month = april 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2346 
		days_for_first = 240 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
