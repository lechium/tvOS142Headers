/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFCancelerObserver.h>

@protocol PFCancelerObserver
@required
-(void)cancelerWasCanceled:(id)arg1;

@end


@interface PFCancelerObserver : NSObject <PFCancelerObserver> {

	/*^block*/id _block;

}
+(id)observerForCanceler:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)cancelerWasCanceled:(id)arg1 ;
-(id)initWithCanceler:(id)arg1 block:(/*^block*/id)arg2 ;
@end

