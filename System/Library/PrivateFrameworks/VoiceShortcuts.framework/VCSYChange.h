/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol VCSYChange <VCPBCodable,VCPBMessageTyped>
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) long long changeType; 
@required
-(long long)changeType;
-(NSString *)objectIdentifier;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;

@end
