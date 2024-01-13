#####################
# Country main data #
#####################

country =
{ tag                    = LEB
  capital                = 1794
  puppet = FRA
  control = FRA
  manpower               = 11.9
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
	relation = { tag = FRA value = 200 }
	relation = { tag = SYR value = 200 }
  }

  nationalprovinces      = { 1794 1793 }

  ownedprovinces         = { 1794 1793 }

  controlledprovinces    = { 1794 1793 }

  techapps               = { 5080 5090 6010 6030 1010 1190 2450 14000 9010 8040 }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 7
     political_left    = 3
     free_market       = 8
     freedom           = 10
     professional_army = 2
     defense_lobby     = 7
     interventionism   = 2
  }
  headofstate            = { type = 9 id = 529001 }
  headofgovernment       = { type = 9 id = 529002 }
  foreignminister        = { type = 9 id = 529003 }
  armamentminister       = { type = 9 id = 529004 }
  ministerofsecurity     = { type = 9 id = 529005 }
  ministerofintelligence = { type = 9 id = 529006 }
  chiefofstaff           = { type = 9 id = 529007 }
  chiefofarmy            = { type = 9 id = 529008 }
  chiefofnavy            = { type = 9 id = 529009 }
  chiefofair             = { type = 9 id = 529010 }
  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_enterprise" 
	nationalculture = "policy_culture_enterprise"

	province_development = { 
		id = { type = 10034 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1794 
		cost = 2.0000 
		date = { 
			year = 1950 
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
		days = 2704 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

