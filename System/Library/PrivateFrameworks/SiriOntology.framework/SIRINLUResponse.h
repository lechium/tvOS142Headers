/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SIRINLURequestID, NSArray;

@interface SIRINLUResponse : NSObject <NSSecureCoding> {

	SIRINLURequestID* _requestId;
	NSArray* _parses;

}

@property (nonatomic,retain) SIRINLURequestID * requestId;              //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) NSArray * parses;                          //@synthesize parses=_parses - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SIRINLURequestID *)requestId;
-(void)setRequestId:(SIRINLURequestID *)arg1 ;
-(NSArray *)parses;
-(id)initWithRequestId:(id)arg1 parses:(id)arg2 ;
-(void)setParses:(NSArray *)arg1 ;
@end

