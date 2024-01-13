#####################
# Country main data #
#####################

country =
{ tag                    = VIE
  puppet = FRA
  control = FRA
  capital                = 1337
  # Resource Reserves
  energy                 = 100
  metal                  = 100
  rare_materials         = 50
  oil                    = 51 #+1
  supplies               = 150 #+100
  money                  = 0
  consumer = 0.3000 
  supply = 0.1900 
  production = 0.5100 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 0.8
  transports             = 10
  escorts                = 0
  diplomacy =
  {
  relation = { tag = FRA value = 200 }
  relation = { tag = CMB value = 200 }
  relation = { tag = LAO value = 200 }
  }
  nationalprovinces      = { 1333 1334 1335 1337 1338 1326 1328 }
  ownedprovinces         = { 1333 1334 1335 1337 1338 1326 1328 }
  controlledprovinces    = { 1333 1334 1335 1337 1338 1326 1328 }
  techapps               = { 1010 2290 6010 6030 1190 5080 5090 1310 2450 8050 }
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
  headofstate            = { type = 9 id = 542001 }
  headofgovernment       = { type = 9 id = 542002 }
  foreignminister        = { type = 9 id = 542003 }
  armamentminister       = { type = 9 id = 542004 }
  ministerofsecurity     = { type = 9 id = 542005 }
  ministerofintelligence = { type = 9 id = 542006 }
  chiefofstaff           = { type = 9 id = 542007 }
  chiefofarmy            = { type = 9 id = 542008 }
  chiefofnavy            = { type = 9 id = 542009 }
  chiefofair             = { type = 9 id = 542010 }

  nationalidentity = "policy_identity_conciliatory" 
	socialpolicy = "policy_social_enterprise"
	nationalculture = "policy_culture_enterprise"

  # #################
  # ###FRENCH OOB####
  # #################
	province_development = { 
		id = { type = 11011 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1337 
		cost = 2.0000 
		date = { 
			year = 1950 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2125 
		days_for_first = 240 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11011 id = 2 } 
		name = "" 
		progress = 0.0000 
		location = 1328 
		cost = 2.0000 
		date = { 
			year = 1952 
			month = september 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 1955 
		days_for_first = 215 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
