/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _WKProcessPoolConfiguration, NSURL, WKGeolocationProviderIOS, NSString;

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<WebKit::WebProcessPool> _processPool;
	WeakObjCPtr<id<_WKAutomationDelegate> > _automationDelegate;
	WeakObjCPtr<id<_WKDownloadDelegate> > _downloadDelegate;
	RetainPtr<_WKAutomationSession>* _automationSession;
	RetainPtr<WKGeolocationProviderIOS>* _geolocationProvider;
	RetainPtr<id<_WKGeolocationCoreLocationProvider> >* _coreLocationProvider;

}

@property (nonatomic,readonly) _WKProcessPoolConfiguration * _configuration; 
@property (assign,setter=_setDownloadDelegate:,nonatomic,__weak) id<_WKDownloadDelegate> _downloadDelegate; 
@property (assign,setter=_setAutomationDelegate:,nonatomic,__weak) id<_WKAutomationDelegate> _automationDelegate; 
@property (assign,setter=_setCoreLocationProvider:,nonatomic) id<_WKGeolocationCoreLocationProvider> _coreLocationProvider; 
@property (setter=_setJavaScriptConfigurationDirectory:,nonatomic,copy) NSURL * _javaScriptConfigurationDirectory; 
@property (assign,setter=_setCookieStoragePartitioningEnabled:,getter=_isCookieStoragePartitioningEnabled,nonatomic) BOOL _cookieStoragePartitioningEnabled; 
@property (assign,setter=_setStorageAccessAPIEnabled:,getter=_isStorageAccessAPIEnabled,nonatomic) BOOL _storageAccessAPIEnabled; 
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_sharedProcessPool;
+(id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2 ;
+(id)_allProcessPoolsForTesting;
+(id)_websiteDataURLForContainerWithURL:(id)arg1 ;
+(void)_forceGameControllerFramework;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_WKProcessPoolConfiguration *)_configuration;
-(id)_initWithConfiguration:(id)arg1 ;
-(WKGeolocationProviderIOS *)_geolocationProvider;
-(id<_WKGeolocationCoreLocationProvider>)_coreLocationProvider;
-(Object*)_apiObject;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(id<_WKAutomationDelegate>)_automationDelegate;
-(id<_WKDownloadDelegate>)_downloadDelegate;
-(unsigned long long)_webProcessCount;
-(BOOL)_hasPrewarmedWebProcess;
-(void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg1 ;
-(void)_setCanHandleHTTPSServerTrustEvaluation:(BOOL)arg1 ;
-(void)_setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(id)_objectForBundleParameter:(id)arg1 ;
-(void)_setObject:(id)arg1 forBundleParameter:(id)arg2 ;
-(void)_setObjectsForBundleParametersWithDictionary:(id)arg1 ;
-(void)_setDownloadDelegate:(id)arg1 ;
-(void)_setAutomationDelegate:(id)arg1 ;
-(void)_warmInitialProcess;
-(void)_automationCapabilitiesDidChange;
-(void)_setAutomationSession:(id)arg1 ;
-(NSURL *)_javaScriptConfigurationDirectory;
-(void)_setJavaScriptConfigurationDirectory:(id)arg1 ;
-(void)_addSupportedPlugin:(id)arg1 named:(id)arg2 withMimeTypes:(id)arg3 withExtensions:(id)arg4 ;
-(void)_clearSupportedPlugins;
-(void)_terminateNetworkProcess;
-(void)_sendNetworkProcessWillSuspendImminently;
-(void)_sendNetworkProcessPrepareToSuspend:(/*^block*/id)arg1 ;
-(void)_sendNetworkProcessDidResume;
-(void)_terminateServiceWorkers;
-(void)_setUseSeparateServiceWorkerProcess:(BOOL)arg1 ;
-(int)_networkProcessIdentifier;
-(int)_prewarmedProcessIdentifier;
-(void)_syncNetworkProcessCookies;
-(void)_clearWebProcessCache;
-(void)_makeNextWebProcessLaunchFailForTesting;
-(void)_makeNextNetworkProcessLaunchFailForTesting;
-(unsigned long long)_webProcessCountIgnoringPrewarmed;
-(unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
-(unsigned long long)_webPageContentProcessCount;
-(void)_preconnectToServer:(id)arg1 ;
-(unsigned long long)_pluginProcessCount;
-(unsigned long long)_maximumSuspendedPageCount;
-(unsigned long long)_processCacheCapacity;
-(unsigned long long)_processCacheSize;
-(unsigned long long)_serviceWorkerProcessCount;
-(BOOL)_isCookieStoragePartitioningEnabled;
-(void)_setCookieStoragePartitioningEnabled:(BOOL)arg1 ;
-(BOOL)_isStorageAccessAPIEnabled;
-(void)_setStorageAccessAPIEnabled:(BOOL)arg1 ;
-(void)_synthesizeAppIsBackground:(BOOL)arg1 ;
-(void)_setAllowsAnySSLCertificateForServiceWorker:(BOOL)arg1 ;
-(void)_setCoreLocationProvider:(id)arg1 ;
-(id)_downloadURLRequest:(id)arg1 websiteDataStore:(id)arg2 originatingWebView:(id)arg3 ;
-(id)_resumeDownloadFromData:(id)arg1 websiteDataStore:(id)arg2 path:(id)arg3 originatingWebView:(id)arg4 ;
-(void)_getActivePagesOriginsInWebProcessForTesting:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_networkProcessHasEntitlementForTesting:(id)arg1 ;
-(void)_clearPermanentCredentialsForProtectionSpace:(id)arg1 ;
-(void)_allowAnyTLSCertificateForWebSocketTesting;
-(void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)arg1 thirdParty:(id)arg2 shouldScheduleNotification:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_garbageCollectJavaScriptObjectsForTesting;
-(unsigned long long)_numberOfConnectedGamepadsForTesting;
-(unsigned long long)_numberOfConnectedHIDGamepadsForTesting;
-(unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
-(void)_setUsesOnlyHIDGamepadProviderForTesting:(BOOL)arg1 ;
@end
