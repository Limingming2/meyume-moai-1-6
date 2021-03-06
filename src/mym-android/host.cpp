// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#include <mym-android/host.h>
#include <mym-android/MYMMOAIHelper.h>
#include <mym-android/MYMMOAIChartboostAndroid.h>
#include <mym-android/MYMMOAIAudioAndroid.h>
#include <mym-android/MYMMOAITwitterAndroid.h>
#include <mym-android/MYMMOAIFacebookAndroid.h>
#include <mym-android/MYMMOAIAmazonAnalytics.h>
#include <mym-android/MYMMOAIAmazonGameCircle.h>
#include <mym-android/MYMMOAIAmazonIAP.h>
#include <mym-android/MYMMOAIGooglePlayServices.h>
#include <mym-android/MYMMOAIGooglePlayApkExtension.h>
#include <mym-android/MYMMOAIGoogleBillingAndroid.h>

//================================================================//
// aku
//================================================================//

//----------------------------------------------------------------//
void AKUMYMAndroidAppFinalize () {
}

//----------------------------------------------------------------//
void AKUMYMAndroidAppInitialize () {
}

//----------------------------------------------------------------//
void AKUMYMAndroidContextInitialize () {
	
	MYMMOAIHelper::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIHelper );
	
	MYMMOAIChartboostAndroid::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIChartboostAndroid );
	
	MYMMOAIAudioAndroid::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIAudioAndroid );
	
	MYMMOAITwitterAndroid::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAITwitterAndroid );
	
	MYMMOAIFacebookAndroid::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIFacebookAndroid );
	
	MYMMOAIAmazonAnalytics::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIAmazonAnalytics );
	
	MYMMOAIAmazonGameCircle::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIAmazonGameCircle );
	
	MYMMOAIAmazonIAP::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIAmazonIAP );
	
	MYMMOAIGooglePlayServices::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIGooglePlayServices );
	
	MYMMOAIGooglePlayApkExtension::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIGooglePlayApkExtension );
	
	MYMMOAIGoogleBillingAndroid::Affirm ();
	REGISTER_LUA_CLASS ( MYMMOAIGoogleBillingAndroid );
	
}
