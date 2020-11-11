/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding> {

	BOOL _isDestructive;
	long long _type;
	NSArray* _affectedContainers;
	NSString* _undoAlertTitle;
	NSString* _undoAlertMessage;

}

@property (getter=_isError,readonly) BOOL _error; 
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isDestructive;                        //@synthesize isDestructive=_isDestructive - In the implementation block
@property (nonatomic,readonly) NSArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (nonatomic,retain) NSString * undoAlertTitle;                   //@synthesize undoAlertTitle=_undoAlertTitle - In the implementation block
@property (nonatomic,retain) NSString * undoAlertMessage;                 //@synthesize undoAlertMessage=_undoAlertMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionWithType:(long long)arg1 ;
+(id)destructiveActionWithType:(long long)arg1 ;
+(id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2 ;
+(id)_actionForError:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(void)setUndoAlertTitle:(NSString *)arg1 ;
-(void)setUndoAlertMessage:(NSString *)arg1 ;
-(NSArray *)affectedContainers;
-(NSString *)undoAlertTitle;
-(NSString *)undoAlertMessage;
-(id)initWithType:(long long)arg1 destructivity:(BOOL)arg2 affectedContainers:(id)arg3 ;
-(BOOL)_isError;
-(BOOL)isDestructive;
@end

