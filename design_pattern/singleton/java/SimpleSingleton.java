package me.bowen.dp;

public class SimpleSingleton
{
	protected SimpleSingleton() {}
	private static SimpleSingleton instance = null;
	public synchronized static SimpleSingleton getInstance()
	{
		if (instance == null)
			instance = new SimpleSingleton();
		return instance;
	}
}

//not recommended because it cuts the possibility to multiple instances later on 
class FinalSingleton
{
	private FinalSingleton() {};
	private static final SimpleSingleton INSTANCE = new SimpleSingleton();
}