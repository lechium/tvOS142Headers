/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSSortDescriptor.h>

@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor {

	NSDictionary* _relatedProperties;

}

@property (nonatomic,copy) NSDictionary * relatedProperties;              //@synthesize relatedProperties=_relatedProperties - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)relatedProperties;
-(void)setRelatedProperties:(NSDictionary *)arg1 ;
@end

