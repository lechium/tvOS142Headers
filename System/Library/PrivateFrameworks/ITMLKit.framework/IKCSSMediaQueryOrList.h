/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {

	IKMutableArray* _queryList;

}
-(id)description;
-(id)init;
-(unsigned long long)count;
-(BOOL)evaluate;
-(id)expressionAsString;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(id)subQueryList;
-(void)addSubQueryList:(id)arg1 ;
@end

