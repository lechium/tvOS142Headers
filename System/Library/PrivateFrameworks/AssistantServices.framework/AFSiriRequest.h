/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding> {

	NSString* _originatingAceID;
	NSUUID* _identifier;
	NSString* __refId;

}

@property (setter=_setRefId:,nonatomic,copy) NSString * _refId;                                    //@synthesize _refId=__refId - In the implementation block
@property (setter=_setOriginatingAceID:,nonatomic,copy) NSString * _originatingAceID;              //@synthesize originatingAceID=_originatingAceID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(NSString *)_refId;
-(id)_af_analyticsContextDescription;
-(id)_initWithOriginatingAceID:(id)arg1 ;
-(NSString *)_originatingAceID;
-(BOOL)_makeAppFrontmost;
-(id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2 ;
-(id)_descriptionWithProperties:(id)arg1 ;
-(id)requestName;
-(void)_setOriginatingAceID:(id)arg1 ;
-(void)_setRefId:(id)arg1 ;
@end
