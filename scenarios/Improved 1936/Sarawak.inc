#####################
# Country main data #
#####################

country =
{ tag                    = SAR
  capital                = 1644
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
	relation = { tag = U75 value = 200 }
  }

  nationalprovinces      = { 1644 1647 1642 1643 1645 1646 1648 1649 1650 1641 }

  ownedprovinces         = { 1644 }

  controlledprovinces    = { 1644 }

  techapps               = { 1010 1190 5080 5090 6010 6030 14000 }
  policy =
  { date              = { year = 0 month = january day = 0 }
	democratic		= 7
	political_left		= 5
	freedom 		= 6
	free_market 		= 5
	professional_army	= 6
	defense_lobby		= 1
	interventionism 	= 1
  }
  headofstate            = { type = 9 id = 566001 }
  headofgovernment       = { type = 9 id = 566002 }
  foreignminister        = { type = 9 id = 566003 }
  armamentminister       = { type = 9 id = 566004 }
  ministerofsecurity     = { type = 9 id = 566005 }
  ministerofintelligence = { type = 9 id = 566006 }
  chiefofstaff           = { type = 9 id = 566007 }
  chiefofarmy            = { type = 9 id = 566008 }
  chiefofnavy            = { type = 9 id = 566009 }
  chiefofair             = { type = 9 id = 566010 }
  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_conformism" 
	nationalculture = "policy_culture_enterprise"

	province_development = { 
		id = { type = 11018 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 1644 
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