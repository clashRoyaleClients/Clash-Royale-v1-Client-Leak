class iAdTitan
{
public:

    Class iAdTitan::checkAttribution()
    {
      Class result; // x0
    
      result = NSClassFromString(&cfstr_Adclient.isa);
      if ( result )
        return (Class)objc_msgSend(
                        -[objc_class sharedClient](result, "sharedClient"),
                        "determineAppInstallationAttributionWithCompletionHandler:",
                        &__block_literal_global_9);
      return result;
    }

}; // end class iAdTitan
