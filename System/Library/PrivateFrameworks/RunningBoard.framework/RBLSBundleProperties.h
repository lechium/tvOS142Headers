/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBBundleProperties.h>

@class LSBundleProxy, NSString, NSURL, NSDictionary;

@interface RBLSBundleProperties : NSObject <RBBundleProperties> {

	LSBundleProxy* _proxy;
	BOOL _backgroundRefreshEnabled;
	BOOL _hasPreferredJetsamBand;
	BOOL _supportsBackgroundContentFetching;
	BOOL _supportsBackgroundNetworkAuthentication;
	BOOL _supportsBackgroundAudio;
	BOOL _supportsUnboundedTaskCompletion;
	BOOL _usesSocketMonitoring;
	BOOL _isExtension;
	int _preferredJetsamBand;
	int _platform;
	NSString* _identifier;
	NSString* _path;
	NSString* _executablePath;
	NSString* _extensionPointIdentifier;
	NSURL* _dataContainerURL;
	NSDictionary* _environmentVariables;

}

@property (getter=isBackgroundRefreshEnabled,nonatomic,readonly) BOOL backgroundRefreshEnabled;              //@synthesize backgroundRefreshEnabled=_backgroundRefreshEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                                               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier;                                     //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                                                     //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * environmentVariables;                                          //@synthesize environmentVariables=_environmentVariables - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundContentFetching;                                       //@synthesize supportsBackgroundContentFetching=_supportsBackgroundContentFetching - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundNetworkAuthentication;                                 //@synthesize supportsBackgroundNetworkAuthentication=_supportsBackgroundNetworkAuthentication - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundAudio;                                                 //@synthesize supportsBackgroundAudio=_supportsBackgroundAudio - In the implementation block
@property (nonatomic,readonly) BOOL supportsUnboundedTaskCompletion;                                         //@synthesize supportsUnboundedTaskCompletion=_supportsUnboundedTaskCompletion - In the implementation block
@property (nonatomic,readonly) BOOL usesSocketMonitoring;                                                    //@synthesize usesSocketMonitoring=_usesSocketMonitoring - In the implementation block
@property (nonatomic,readonly) int preferredJetsamBand;                                                      //@synthesize preferredJetsamBand=_preferredJetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredJetsamBand;                                                  //@synthesize hasPreferredJetsamBand=_hasPreferredJetsamBand - In the implementation block
@property (nonatomic,readonly) BOOL isExtension;                                                             //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,readonly) int platform;                                                                 //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(BOOL)isExtension;
-(NSURL *)dataContainerURL;
-(NSDictionary *)environmentVariables;
-(int)platform;
-(NSString *)extensionPointIdentifier;
-(BOOL)usesSocketMonitoring;
-(BOOL)supportsBackgroundContentFetching;
-(BOOL)supportsBackgroundNetworkAuthentication;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
-(BOOL)supportsBackgroundAudio;
-(BOOL)supportsUnboundedTaskCompletion;
-(BOOL)isBackgroundRefreshEnabled;
-(int)preferredJetsamBand;
-(BOOL)hasPreferredJetsamBand;
@end
