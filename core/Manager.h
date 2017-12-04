#ifndef SR_MANAGER_H
#define SR_MANAGER_H

namespace SR
{
	class Manager : public Singleton<Manager>
	{
		private:
		
		public:
			Manager(){ }
			~Manager(){ }
	};
}
#endif
