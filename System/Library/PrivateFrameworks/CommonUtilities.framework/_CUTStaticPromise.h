/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTPromise.h>

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {

	CUTResult* _result;
	BOOL _safe;

}

@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(id)initWithResult:(id)arg1 safe:(BOOL)arg2 ;
-(id)then:(/*^block*/id)arg1 ;
@end

