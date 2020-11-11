/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDescriptor.h>

@class BKSHIDEventDescriptor;

@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor {

	unsigned long long _senderID;
	BKSHIDEventDescriptor* _sourceDescriptor;

}

@property (nonatomic,retain) BKSHIDEventDescriptor * sourceDescriptor;              //@synthesize sourceDescriptor=_sourceDescriptor - In the implementation block
@property (readonly) unsigned long long senderID;                                   //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)describes:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 senderID:(unsigned long long)arg2 ;
-(id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1 ;
-(BOOL)matchesHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned long long)senderID;
-(BKSHIDEventDescriptor *)sourceDescriptor;
-(void)setSourceDescriptor:(BKSHIDEventDescriptor *)arg1 ;
@end
