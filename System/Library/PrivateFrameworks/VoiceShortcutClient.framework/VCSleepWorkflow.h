/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface VCSleepWorkflow : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _actions;
	NSString* _name;
	NSString* _summaryString;

}

@property (nonatomic,copy,readonly) NSArray * actions;                                  //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifierForDisplay; 
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString;                           //@synthesize summaryString=_summaryString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)actions;
-(id)initWithActions:(id)arg1 ;
-(NSString *)summaryString;
-(NSString *)bundleIdentifierForDisplay;
@end
