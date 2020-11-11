/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, GEOLogMsgState, NSString;

@interface GEOAnalyticsPipelineStateFactory : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	GEOLogMsgState* _deviceIdentifierState;
	GEOLogMsgState* _deviceIdentifierInternalState;
	GEOLogMsgState* _applicationIdentifierState;
	NSString* _countryCode;

}
+(id)sharedFactory;
-(id)init;
-(void)dealloc;
-(id)suggestions;
-(id)deviceIdentifier;
-(id)placeRequest;
-(id)route;
-(id)applicationIdentifier;
-(void)deviceCountryChanged:(id)arg1 ;
-(id)deviceLocale;
-(id)deviceLocaleLimited;
-(id)deviceConnection;
-(id)deviceConnectionLimited;
-(id)deviceSettings_Short;
-(id)carPlay;
-(id)carPlayLimited;
-(id)pairedDevice;
-(id)extension;
-(id)mapView;
-(id)mapViewLocation;
-(id)mapSettings;
-(id)placeCard;
-(id)mapsServer;
-(id)mapRestore;
-(id)mapLaunch;
-(id)deviceIndentifierInternal;
-(id)mapUI;
-(id)mapUIShown;
-(id)experimentsIncludingABAssignInfo:(BOOL)arg1 includingClientConfig:(BOOL)arg2 ;
-(id)tileSet;
-(id)deviceSettings_Long;
-(id)curatedCollection;
-(id)ugc;
-(id)market;
-(id)_emptyUserSessionState;
-(id)mapsUser;
-(id)deviceIdentifierNoHardware;
-(int)logMsgStateTypeForType:(long long)arg1 ;
-(id)stateForType:(long long)arg1 ;
-(id)sessionStateForType:(long long)arg1 ;
@end

