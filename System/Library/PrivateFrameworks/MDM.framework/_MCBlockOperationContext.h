/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MCBlockOperationContext.h>

@class MCBlockOperation;

@interface _MCBlockOperationContext : NSObject <MCBlockOperationContext> {

	MCBlockOperation* _operation;

}

@property (nonatomic,retain) MCBlockOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(MCBlockOperation *)operation;
-(void)setOperation:(MCBlockOperation *)arg1 ;
-(void)endBlockOperation;
@end

