#include <gazebo/gazebo.hh>
namespace gazebo
{
  class WelcomeMessage : public WorldPlugin
  {
  	public: WelcomeMessage() : WorldPlugin()
    {
    	printf("Welcome to Neerav's World..\n");
    }
   	public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WelcomeMessage)
}