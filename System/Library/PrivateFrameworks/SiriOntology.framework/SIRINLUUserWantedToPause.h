/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class USOSerializedGraph;

@interface SIRINLUUserWantedToPause : NSObject <SIRINLUUserDialogAct> {

	USOSerializedGraph* _reference;

}

@property (nonatomic,retain) USOSerializedGraph * reference;              //@synthesize reference=_reference - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(USOSerializedGraph *)reference;
-(void)setReference:(USOSerializedGraph *)arg1 ;
-(id)initWithReference:(id)arg1 ;
@end

