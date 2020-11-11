/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PBSOverlayLayoutElementIdentifier, NSString;

@interface PBSOverlayLayoutElementHint : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {

	PBSOverlayLayoutElementIdentifier* _identifier;
	CGVector _offset;

}

@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,copy,readonly) PBSOverlayLayoutElementIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) CGVector offset;                                                  //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PBSOverlayLayoutElementIdentifier *)identifier;
-(CGAffineTransform)transform;
-(CGVector)offset;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 offset:(CGVector)arg2 ;
@end

