/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRadioContentReference, MPIdentifierSet;

@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding> {

	ICRadioContentReference* _ICRadioContentReference;
	MPIdentifierSet* _referenceModelObjectIdentifiers;

}

@property (nonatomic,readonly) ICRadioContentReference * ICRadioContentReference;              //@synthesize ICRadioContentReference=_ICRadioContentReference - In the implementation block
@property (nonatomic,readonly) MPIdentifierSet * referenceModelObjectIdentifiers;              //@synthesize referenceModelObjectIdentifiers=_referenceModelObjectIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referenceWithMPModelObject:(id)arg1 ;
+(id)referenceWithMPModelObject:(id)arg1 containerModelPlayEvent:(id)arg2 ;
+(id)referenceWithStoreIdentifier:(id)arg1 trackInfo:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ICRadioContentReference *)ICRadioContentReference;
-(id)initWithICRadioContentReference:(id)arg1 ;
-(MPIdentifierSet *)referenceModelObjectIdentifiers;
@end

