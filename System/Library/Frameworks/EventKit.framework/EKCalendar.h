/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class EKSource, NSString;

@interface EKCalendar : EKObject {

	unsigned long long _cachedJunkStatus;

}

@property (assign,nonatomic) unsigned long long cachedJunkStatus;                            //@synthesize cachedJunkStatus=_cachedJunkStatus - In the implementation block
@property (nonatomic,retain) EKSource * source; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) BOOL allowsContentModifications; 
@property (getter=isSubscribed,nonatomic,readonly) BOOL subscribed; 
@property (getter=isImmutable,nonatomic,readonly) BOOL immutable; 
@property (assign,nonatomic) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
+(id)knownIdentityKeysForComparison;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipSingleValueKeys;
+(BOOL)isWeakRelationship;
+(id)knownRelationshipWeakKeys;
+(id)EKObjectChangeSummarizer_singleValueDiffKeys;
+(id)EKObjectChangeSummarizer_multiValueDiffKeys;
+(id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(id)calendarForEntityTypes:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(id)_eventKitBundle;
+(id)typeDescription:(long long)arg1 ;
+(id)rowIDsForCalendars:(id)arg1 ;
+(id)calendarWithEventStore:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned)flags;
-(long long)type;
-(NSString *)calendarIdentifier;
-(EKSource *)source;
-(id)UUID;
-(void)setSource:(EKSource *)arg1 ;
-(BOOL)_reset;
-(void)reset;
-(BOOL)remove:(id*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGColorRef)CGColor;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)refresh;
-(BOOL)validate:(id*)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(id)subscriptionID;
-(BOOL)isHidden;
-(void)setUUID:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)readOnly;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(void)setSubscriptionID:(id)arg1 ;
-(int)entityType;
-(BOOL)hasEvents;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(void)addAlarms:(id)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(id)externalURI;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)externalRepresentation;
-(void)setExternalRepresentation:(id)arg1 ;
-(BOOL)isSubscribed;
-(void)setSubscribed:(BOOL)arg1 ;
-(id)refreshDate;
-(id)pushKey;
-(id)syncToken;
-(void)setPushKey:(id)arg1 ;
-(void)setSyncToken:(id)arg1 ;
-(BOOL)hasTasks;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(BOOL)supportsJunkReporting;
-(id)unlocalizedTitle;
-(id)colorStringRaw;
-(id)sharees;
-(id)externalIDTag;
-(void)setExternalIDTag:(id)arg1 ;
-(void)setUnlocalizedTitle:(id)arg1 ;
-(BOOL)isColorDisplayOnly;
-(void)setColorDisplayOnly:(BOOL)arg1 ;
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(void)setColorStringRaw:(id)arg1 ;
-(int)displayOrder;
-(void)setDisplayOrder:(int)arg1 ;
-(unsigned long long)sharingStatus;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(id)sharedOwnerName;
-(void)setSharedOwnerName:(id)arg1 ;
-(id)sharedOwnerURL;
-(void)setSharedOwnerURL:(id)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(id)publishURL;
-(void)setPublishURL:(id)arg1 ;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)isPublished;
-(void)setSharees:(id)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(int)allowedEntities;
-(void)setAllowedEntities:(int)arg1 ;
-(id)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(id)arg1 ;
-(id)selfIdentityEmail;
-(void)setSelfIdentityEmail:(id)arg1 ;
-(id)selfIdentityPhoneNumber;
-(void)setSelfIdentityPhoneNumber:(id)arg1 ;
-(id)selfIdentityAddress;
-(void)setSelfIdentityAddress:(id)arg1 ;
-(id)selfIdentityFirstName;
-(void)setSelfIdentityFirstName:(id)arg1 ;
-(id)selfIdentityLastName;
-(void)setSelfIdentityLastName:(id)arg1 ;
-(id)ownerIdentityDisplayName;
-(int)ownerIdentityId;
-(void)setOwnerIdentityId:(id)arg1 ;
-(void)setOwnerIdentityDisplayName:(id)arg1 ;
-(id)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(id)arg1 ;
-(id)ownerIdentityPhoneNumber;
-(void)setOwnerIdentityPhoneNumber:(id)arg1 ;
-(id)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(id)arg1 ;
-(id)ownerIdentityFirstName;
-(void)setOwnerIdentityFirstName:(id)arg1 ;
-(id)ownerIdentityLastName;
-(void)setOwnerIdentityLastName:(id)arg1 ;
-(id)subcalAccountID;
-(void)setSubcalAccountID:(id)arg1 ;
-(id)digest;
-(void)setDigest:(id)arg1 ;
-(void)setAllAlarms:(id)arg1 ;
-(id)allAlarms;
-(void)setRefreshDate:(id)arg1 ;
-(id)lastSyncStartDate;
-(void)setLastSyncStartDate:(id)arg1 ;
-(id)lastSyncEndDate;
-(void)setLastSyncEndDate:(id)arg1 ;
-(unsigned long long)lastSyncError;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(id)lastSyncErrorData;
-(void)setLastSyncErrorData:(id)arg1 ;
-(id)sharedOwnerEmail;
-(id)sharedOwnerPhoneNumber;
-(unsigned long long)allowedEntityTypes;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(BOOL)couldBeJunk;
-(BOOL)allowsContentModifications;
-(BOOL)isMutableSuggestionsCalendar;
-(BOOL)isMutableNaturalLanguageSuggestionsCalendar;
-(BOOL)_validateDeletable:(id*)arg1 ;
-(BOOL)_validateAccessConsent:(id*)arg1 ;
-(BOOL)isSuggestedEventCalendar;
-(BOOL)isNaturalLanguageSuggestedEventCalendar;
-(BOOL)allowsScheduling;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(BOOL)isDeletable;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAllSnoozedAlarms;
-(unsigned long long)cachedJunkStatus;
-(void)setCachedJunkStatus:(unsigned long long)arg1 ;
-(id)sendersEmail;
-(id)sendersPhoneNumber;
-(BOOL)commit:(id*)arg1 ;
-(BOOL)isDefaultSchedulingCalendar;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(BOOL)allowReminders;
-(unsigned long long)supportedEventAvailabilities;
-(BOOL)isFacebookBirthdayCalendar;
-(BOOL)isSubscribedHolidayCalendar;
-(BOOL)automaticEventLocationGeocodingAllowed;
-(BOOL)allowEvents;
-(id)sharedOwnerAddress;
-(void)clearInvitationStatus;
-(void)_clearCGColorCache;
-(id)colorString;
-(BOOL)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3 ;
-(BOOL)_flagValueWithMask:(unsigned)arg1 ;
-(void)_setFlagValue:(BOOL)arg1 withMask:(unsigned)arg2 ;
-(BOOL)_validateDeletableHelper:(id*)arg1 ;
-(BOOL)isMarkedUndeletable;
-(BOOL)isFamilyCalendar;
-(BOOL)_anotherCalendarForDefaultSchedulingExists;
-(BOOL)_anotherCalendarForRemindersExists;
-(BOOL)eligibleForDefaultSchedulingCalendar;
-(BOOL)_anyCalendarOfType:(unsigned long long)arg1 inSameSourceExistsPassingTest:(/*^block*/id)arg2 ;
-(BOOL)prohibitsScheduling;
-(void)setProhibitsScheduling:(BOOL)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(void)setCanBePublished:(BOOL)arg1 ;
-(void)setLastSyncErrorUserInfo:(id)arg1 ;
-(void)removeAlarms:(id)arg1 ;
-(BOOL)isImmutable;
-(void)setColorString:(id)arg1 ;
-(void)setCGColor:(CGColorRef)arg1 ;
-(void)setAllowsContentModifications:(BOOL)arg1 ;
-(void)setIsDefaultSchedulingCalendar:(BOOL)arg1 ;
-(BOOL)isInbox;
-(void)setInbox:(BOOL)arg1 ;
-(BOOL)isNotificationsCollection;
-(void)setNotificationsCollection:(BOOL)arg1 ;
-(BOOL)isImmutableRaw;
-(void)setImmutable:(BOOL)arg1 ;
-(long long)deletionWarningsMask;
-(BOOL)canMergeWithCalendar:(id)arg1 ;
-(void)setAllowsScheduling:(BOOL)arg1 ;
-(BOOL)isSharingInvitation;
-(void)setSharingInvitation:(BOOL)arg1 ;
-(void)setSharedOwnerAddress:(id)arg1 ;
-(BOOL)canBePublished;
-(BOOL)canBeShared;
-(void)setFacebookBirthdayCalendar:(BOOL)arg1 ;
-(BOOL)isHolidaySubscribedCalendar;
-(void)setSubscribedHolidayCalendar:(BOOL)arg1 ;
-(void)setFamilyCalendar:(BOOL)arg1 ;
-(void)setMarkedUndeletable:(BOOL)arg1 ;
-(BOOL)isMarkedImmutableSharees;
-(void)setMarkedImmutableSharees:(BOOL)arg1 ;
-(BOOL)isSuggestionsCalendar;
-(BOOL)isIgnoringEventAlerts;
-(void)setIsIgnoringEventAlerts:(BOOL)arg1 ;
-(BOOL)allowsIgnoringSharedEventChangeNotifications;
-(BOOL)isIgnoringSharedCalendarNotifications;
-(void)setIsIgnoringSharedCalendarNotifications:(BOOL)arg1 ;
-(BOOL)isAffectingAvailability;
-(void)setIsAffectingAvailability:(BOOL)arg1 ;
-(id)syncHash;
-(id)selectionSyncIdentifier;
-(void)setAllowReminders:(BOOL)arg1 ;
-(void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(id)lastSyncErrorUserInfo;
-(BOOL)isSyncing;
-(void)addSharee:(id)arg1 ;
-(void)removeSharee:(id)arg1 ;
-(BOOL)hasSharees;
-(id)ownerIdentityOrganizer;
-(BOOL)isManaged;
-(id)exportData;
-(void)setIsJunk:(BOOL)arg1 ;
@end
