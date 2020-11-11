/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreKit/AppStoreKit.ASKGlobalExports.h>

@class ASKClient, _TtC11AppStoreKit20JSStoreMetricsObject, NSDictionary, _TtC11AppStoreKit12JSUserObject, _TtC11AppStoreKit21ClientOrderingWrapper, _TtC11AppStoreKit28JSPersonalizationStoreObject, _TtC11AppStoreKit20JSResilientDeepLinks, _TtC11AppStoreKit14JSArcadeObject, _TtC11AppStoreKit12JSGameCenter, _TtC11AppStoreKit12AppleSilicon;

@interface AppStoreKit.ASKGlobal : NSObject <AppStoreKit.ASKGlobalExports> {

	 client;
	 loc;
	 storeMetrics;
	 user;
	 props;
	 clientOrdering;
	 personalizationStore;
	 resilientDeepLinks;
	 arcade;
	 gameCenter;
	 appleSilicon;

}

@property (readonly,nonatomic) ASKClient * client; 
@property (readonly,nonatomic) id<_TtP11AppStoreKit20LocalizationProtocol_> loc; 
@property (readonly,nonatomic) _TtC11AppStoreKit20JSStoreMetricsObject * storeMetrics; 
@property (readonly,nonatomic) _TtC11AppStoreKit12JSUserObject * user; 
@property (readonly,nonatomic) NSDictionary * props; 
@property (readonly,nonatomic) _TtC11AppStoreKit21ClientOrderingWrapper * clientOrdering; 
@property (readonly,nonatomic) _TtC11AppStoreKit28JSPersonalizationStoreObject * personalizationStore; 
@property (readonly,nonatomic) _TtC11AppStoreKit20JSResilientDeepLinks * resilientDeepLinks; 
@property (readonly,nonatomic) _TtC11AppStoreKit14JSArcadeObject * arcade; 
@property (readonly,nonatomic) _TtC11AppStoreKit12JSGameCenter * gameCenter; 
@property (readonly,nonatomic) _TtC11AppStoreKit12AppleSilicon * appleSilicon; 
-(id)init;
-(_TtC11AppStoreKit12JSUserObject *)user;
-(ASKClient *)client;
-(id<_TtP11AppStoreKit20LocalizationProtocol_>)loc;
-(_TtC11AppStoreKit20JSStoreMetricsObject *)storeMetrics;
-(NSDictionary *)props;
-(_TtC11AppStoreKit21ClientOrderingWrapper *)clientOrdering;
-(_TtC11AppStoreKit28JSPersonalizationStoreObject *)personalizationStore;
-(_TtC11AppStoreKit20JSResilientDeepLinks *)resilientDeepLinks;
-(_TtC11AppStoreKit14JSArcadeObject *)arcade;
-(_TtC11AppStoreKit12JSGameCenter *)gameCenter;
-(_TtC11AppStoreKit12AppleSilicon *)appleSilicon;
@end

