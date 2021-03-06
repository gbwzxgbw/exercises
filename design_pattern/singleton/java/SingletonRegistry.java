package me.bowen.dp;

import java.util.HashMap;

public class SingletonRegistry
{
	public static SingletonRegistry REGISTRY = new SingletonRegistry();
	private static HashMap<String, Object> map = new HashMap<String, Object>();
	protected SingletonRegistry() {}
	public static synchronized Object getInstance(String classname)
	{
		Object singleton = map.get(classname);
		if(singleton != null)
		{
			return singleton;
		}
		try
		{
			singleton = Class.forName(classname).newInstance();
			//logger.info("created singleton: " + singleton);
		}
		catch(ClassNotFoundException cnf)
		{
			//logger.fatal("Couldn't find class " + classname);
		}
		catch(InstantiationException ie)
		{
			//logger.fatal("Couldn't instantiate an object of type " + classname);
		}
		catch(IllegalAccessException ia)
		{
			//logger.fatal("Couldn't access class " + classname);
		}
		map.put(classname, singleton);
		return singleton;
	}
}