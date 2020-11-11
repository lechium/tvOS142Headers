/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray;


@protocol CalDAVCalendar <NSObject>
@property (nonatomic,readonly) id<CalDAVPrincipal> principal; 
@property (nonatomic,retain) NSString * guid; 
@property (nonatomic,retain) NSURL * calendarURL; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * notes; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,retain) NSString * symbolicColorName; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSURL * owner; 
@property (nonatomic,retain) NSString * ownerDisplayName; 
@property (nonatomic,retain) NSSet * preferredCalendarUserAddresses; 
@property (nonatomic,retain) NSURL * publishURL; 
@property (nonatomic,retain) NSURL * prePublishURL; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (assign,nonatomic) int order; 
@property (assign,nonatomic) int sharingStatus; 
@property (nonatomic,retain) NSSet * sharees; 
@property (assign,nonatomic) BOOL isTaskContainer; 
@property (assign,nonatomic) BOOL isEventContainer; 
@property (assign,nonatomic) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL isManagedByServer; 
@property (assign,nonatomic) BOOL isScheduleInbox; 
@property (assign,nonatomic) BOOL isScheduleOutbox; 
@property (assign,nonatomic) BOOL isNotification; 
@property (assign,nonatomic) BOOL isPoll; 
@property (assign,nonatomic) BOOL isEditable; 
@property (assign,nonatomic) BOOL isRenameable; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (assign,nonatomic) BOOL isPublished; 
@property (assign,nonatomic) BOOL isAffectingAvailability; 
@property (assign,nonatomic) BOOL canBePublished; 
@property (assign,nonatomic) BOOL canBeShared; 
@property (assign,nonatomic) BOOL isFamilyCalendar; 
@property (assign,nonatomic) BOOL isMarkedUndeletable; 
@property (assign,nonatomic) BOOL isMarkedImmutableSharees; 
@property (assign,nonatomic) BOOL wasModifiedLocally; 
@property (assign,nonatomic) BOOL needsResync; 
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSString * syncToken; 
@property (nonatomic,readonly) BOOL needsPublishUpdate; 
@property (nonatomic,readonly) NSArray * syncActions; 
@property (nonatomic,readonly) NSArray * shareeActions; 
@property (nonatomic,readonly) NSArray * itemsToReportAsJunk; 
@property (nonatomic,readonly) NSDictionary * uuidsToAddActions; 
@property (nonatomic,readonly) NSDictionary * hrefsToModDeleteActions; 
@property (nonatomic,readonly) NSSet * allItemURLs; 
@property (nonatomic,readonly) NSArray * recurrenceSplitActions; 
@property (assign,nonatomic) long long maxAttendees; 
@property (nonatomic,readonly) BOOL needsIsAffectingAvailabilityUpdate; 
@optional
-(long long)maxAttendees;
-(void)setMaxAttendees:(long long)arg1;
-(Class)appSpecificCalendarItemClass;
-(NSArray *)recurrenceSplitActions;
-(void)recurrenceSplitAction:(id)arg1 failedWithError:(id)arg2;
-(void)recurrenceSplitAction:(id)arg1 completedWithUpdatedETag:(id)arg2 updatedScheduleTag:(id)arg3 createdURL:(id)arg4 createdETag:(id)arg5 createdScheduleTag:(id)arg6;
-(void)clearShareeActions;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1;
-(void)syncDidFinishWithError:(id)arg1;
-(void)putAction:(id)arg1 completedWithError:(id)arg2;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2;
-(void)recurrenceSplitActionsCompletedWithError:(id)arg1;
-(BOOL)needsIsAffectingAvailabilityUpdate;

@required
-(void)setTimeZone:(id)arg1;
-(NSTimeZone *)timeZone;
-(void)setOwner:(id)arg1;
-(int)order;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(BOOL)isEnabled;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1;
-(void)setGuid:(id)arg1;
-(NSString *)guid;
-(void)setIsEnabled:(BOOL)arg1;
-(NSString *)color;
-(void)setColor:(id)arg1;
-(void)setOrder:(int)arg1;
-(NSString *)notes;
-(void)setNotes:(id)arg1;
-(NSURL *)owner;
-(BOOL)isSubscribed;
-(NSString *)pushKey;
-(NSDictionary *)bulkRequests;
-(NSString *)syncToken;
-(void)setPushKey:(id)arg1;
-(void)setBulkRequests:(id)arg1;
-(void)setSyncToken:(id)arg1;
-(id<CalDAVPrincipal>)principal;
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(NSSet *)sharees;
-(NSString *)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1;
-(int)sharingStatus;
-(void)setSharingStatus:(int)arg1;
-(NSURL *)publishURL;
-(void)setPublishURL:(id)arg1;
-(void)setIsPublished:(BOOL)arg1;
-(BOOL)isPublished;
-(void)setSharees:(id)arg1;
-(BOOL)isMarkedUndeletable;
-(BOOL)isFamilyCalendar;
-(void)setCanBeShared:(BOOL)arg1;
-(void)setCanBePublished:(BOOL)arg1;
-(BOOL)canBePublished;
-(BOOL)canBeShared;
-(BOOL)isMarkedImmutableSharees;
-(BOOL)isAffectingAvailability;
-(void)setIsAffectingAvailability:(BOOL)arg1;
-(NSString *)ctag;
-(void)setCtag:(id)arg1;
-(NSString *)ownerDisplayName;
-(void)setOwnerDisplayName:(id)arg1;
-(BOOL)isScheduleInbox;
-(BOOL)isScheduleOutbox;
-(BOOL)isNotification;
-(BOOL)isEventContainer;
-(BOOL)isTaskContainer;
-(NSURL *)prePublishURL;
-(void)setPrePublishURL:(id)arg1;
-(void)setIsMarkedImmutableSharees:(BOOL)arg1;
-(void)setIsMarkedUndeletable:(BOOL)arg1;
-(BOOL)needsResync;
-(NSURL *)calendarURL;
-(NSArray *)syncActions;
-(void)setPreferredCalendarUserAddresses:(id)arg1;
-(void)setIsFamilyCalendar:(BOOL)arg1;
-(void)setCalendarURL:(id)arg1;
-(BOOL)needsPublishUpdate;
-(NSArray *)shareeActions;
-(void)setIsEventContainer:(BOOL)arg1;
-(void)setIsTaskContainer:(BOOL)arg1;
-(void)setIsRenameable:(BOOL)arg1;
-(void)setIsSubscribed:(BOOL)arg1;
-(void)setIsScheduleInbox:(BOOL)arg1;
-(void)setIsScheduleOutbox:(BOOL)arg1;
-(void)setIsPoll:(BOOL)arg1;
-(void)setIsNotification:(BOOL)arg1;
-(id)etagsForItemURLs:(id)arg1;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
-(BOOL)updateResourcesFromServer:(id)arg1;
-(BOOL)deleteResourcesAtURLs:(id)arg1;
-(BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg1;
-(NSSet *)preferredCalendarUserAddresses;
-(BOOL)isManagedByServer;
-(void)setIsManagedByServer:(BOOL)arg1;
-(BOOL)isPoll;
-(BOOL)isRenameable;
-(BOOL)wasModifiedLocally;
-(void)setWasModifiedLocally:(BOOL)arg1;
-(void)setNeedsResync:(BOOL)arg1;
-(NSArray *)itemsToReportAsJunk;
-(NSSet *)allItemURLs;

@end

