/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperationQueue.h>

@interface PLInstrumentedOperationQueue : NSOperationQueue {

	/*^block*/id _pl_operationCountChangedBlock;

}

@property (copy) id pl_operationCountChangedBlock;              //@synthesize pl_operationCountChangedBlock=_pl_operationCountChangedBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)pl_operationCountChangedBlock;
-(void)setPl_operationCountChangedBlock:(id)arg1 ;
@end

