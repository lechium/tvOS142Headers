/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface _MXExtensionMatchingMerger : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSArray* _mapExtensions;
	NSArray* _intentNonUIExtensions;
	NSArray* _intentUIExtensions;

}
-(id)init;
-(id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)clearExtensions;
@end

