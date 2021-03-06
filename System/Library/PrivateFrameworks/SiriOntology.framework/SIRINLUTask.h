/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class USOSerializedGraph;

@interface SIRINLUTask : NSObject <NSSecureCoding> {

	USOSerializedGraph* _task;
	double _score;

}

@property (nonatomic,retain) USOSerializedGraph * task;              //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) double score;                           //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(USOSerializedGraph *)task;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(id)initWithTask:(id)arg1 score:(double)arg2 ;
@end

