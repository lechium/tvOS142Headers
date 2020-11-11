/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@class NSString, NSUUID, USOSerializedGraph;

@interface SIRINLUSystemReportedFailure : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	NSUUID* _taskId;
	USOSerializedGraph* _reason;
	USOSerializedGraph* _task;

}

@property (nonatomic,retain) NSUUID * taskId;                          //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * task;                //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(USOSerializedGraph *)reason;
-(void)setReason:(USOSerializedGraph *)arg1 ;
-(USOSerializedGraph *)task;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(NSUUID *)taskId;
-(void)setTaskId:(NSUUID *)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
-(id)initWithTaskId:(id)arg1 reason:(id)arg2 task:(id)arg3 ;
@end

