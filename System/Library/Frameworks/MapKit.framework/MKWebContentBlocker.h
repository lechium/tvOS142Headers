/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface MKWebContentBlocker : NSObject {

	NSCache* _regularExpressionCache;

}
+(id)sharedBlocker;
-(id)_regularExpression;
-(BOOL)shouldBlockLoadingOfURL:(id)arg1 ;
@end

