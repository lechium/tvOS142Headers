/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject {

	NSMutableArray* _sources;

}
+(id)sharedInstance;
+(void)registerUIKitSource:(id)arg1 ;
+(void)unregisterUIKitSource:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)remove:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 ;
-(void)add:(id)arg1 ;
@end

