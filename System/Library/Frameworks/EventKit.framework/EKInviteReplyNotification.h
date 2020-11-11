/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKNotification.h>

@class EKCalendar, NSString, NSURL, NSDate;

@interface EKInviteReplyNotification : EKNotification

@property (nonatomic,readonly) EKCalendar * inviteReplyCalendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,copy) NSString * inReplyTo; 
@property (nonatomic,copy) NSString * shareeDisplayName; 
@property (nonatomic,copy) NSString * shareeFirstName; 
@property (nonatomic,copy) NSString * shareeLastName; 
@property (nonatomic,copy) NSURL * shareeURL; 
@property (nonatomic,readonly) NSString * shareeEmailAddress; 
@property (nonatomic,readonly) NSString * shareePhoneNumber; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,readonly) BOOL alerted; 
+(Class)frozenClass;
+(id)sourceForInviteReplyNotification:(id)arg1 ;
+(id)knownRelationshipSingleValueKeys;
-(NSDate *)creationDate;
-(BOOL)validate:(id*)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(unsigned long long)shareeStatus;
-(NSString *)calendarName;
-(NSString *)shareeDisplayName;
-(NSString *)shareeEmailAddress;
-(NSString *)shareePhoneNumber;
-(NSURL *)shareeURL;
-(BOOL)alerted;
-(EKCalendar *)inviteReplyCalendar;
-(void)_setInviteReplyCalendar:(id)arg1 ;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(id)initWithInviteReplyCalendar:(id)arg1 ;
-(NSString *)inReplyTo;
-(void)setInReplyTo:(NSString *)arg1 ;
-(void)setShareeDisplayName:(NSString *)arg1 ;
-(void)setShareeFirstName:(NSString *)arg1 ;
-(void)setShareeLastName:(NSString *)arg1 ;
-(void)setShareeURL:(NSURL *)arg1 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(void)clearAlertedStatus;
@end

