/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKCalendarItem.h>
#import <libobjc.A.dylib/EKJunkInvitationProtocol_Private.h>
#import <libobjc.A.dylib/CalDateRangeProtocol.h>

@class NSString, EKEventStore, EKStructuredLocation, NSDate, EKReadWriteLock, EKCalendarDate, NSNumber, NSArray, EKRecurrenceIdentifier, EKSuggestedEventInfo, NSURL, NSSet, EKParticipant;

@interface EKEvent : EKCalendarItem <EKJunkInvitationProtocol_Private, CalDateRangeProtocol> {

	EKStructuredLocation* _cachedLocationPrediction;
	NSDate* _cachedLocationPredictionExpirationDate;
	BOOL _locationPredictionFrozen;
	BOOL _locationPredictionAllowed;
	EKReadWriteLock* _locationPredictionLock;
	BOOL _occurrenceIsAllDay;
	BOOL _requiresDetachDueToSnoozedAlarm;
	BOOL _currentUserInvitedAttendee;
	int _clearModifiedFlags;
	NSString* _birthdayPersonUniqueID;
	EKCalendarDate* _occurrenceStartDate;
	EKCalendarDate* _occurrenceEndDate;
	EKCalendarDate* _originalOccurrenceStartDate;
	EKCalendarDate* _originalOccurrenceEndDate;
	NSNumber* _originalOccurrenceIsAllDay;
	NSDate* _proposedEndDate;

}

@property (nonatomic,retain) NSArray * locations; 
@property (nonatomic,readonly) NSArray * locationsWithoutPrediction; 
@property (nonatomic,copy) EKCalendarDate * occurrenceStartDate;                                                 //@synthesize occurrenceStartDate=_occurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * occurrenceEndDate;                                                   //@synthesize occurrenceEndDate=_occurrenceEndDate - In the implementation block
@property (assign,nonatomic) BOOL occurrenceIsAllDay;                                                            //@synthesize occurrenceIsAllDay=_occurrenceIsAllDay - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceStartDate;                                         //@synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceEndDate;                                           //@synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate - In the implementation block
@property (nonatomic,copy) NSNumber * originalOccurrenceIsAllDay;                                                //@synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay - In the implementation block
@property (assign,nonatomic) BOOL requiresDetachDueToSnoozedAlarm;                                               //@synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm - In the implementation block
@property (assign,nonatomic) int clearModifiedFlags;                                                             //@synthesize clearModifiedFlags=_clearModifiedFlags - In the implementation block
@property (nonatomic,readonly) EKRecurrenceIdentifier * recurrenceIdentifier; 
@property (nonatomic,readonly) NSDate * recurrenceDate; 
@property (nonatomic,readonly) NSString * eventOccurrenceID; 
@property (assign,nonatomic) long long privacyLevel; 
@property (nonatomic,readonly) BOOL locationIsAConferenceRoom; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double travelTime; 
@property (nonatomic,readonly) NSDate * startDateIncludingTravel; 
@property (nonatomic,readonly) BOOL isStartDateDirty; 
@property (nonatomic,readonly) BOOL isEndDateDirty; 
@property (nonatomic,readonly) BOOL allowsTravelTimeModifications; 
@property (nonatomic,readonly) BOOL allowsAllDayModifications; 
@property (nonatomic,retain) EKStructuredLocation * travelStartLocation; 
@property (nonatomic,retain) EKStructuredLocation * endLocation; 
@property (nonatomic,readonly) BOOL automaticLocationGeocodingAllowed; 
@property (assign,nonatomic) long long travelAdvisoryBehavior; 
@property (nonatomic,readonly) BOOL travelAdvisoryBehaviorIsEffectivelyEnabled; 
@property (nonatomic,readonly) BOOL eligibleForTravelAdvisories; 
@property (nonatomic,readonly) BOOL potentiallyEligibleForTravelAdvisories; 
@property (nonatomic,retain) EKSuggestedEventInfo * suggestionInfo; 
@property (nonatomic,readonly) NSString * locationWithoutPrediction; 
@property (nonatomic,readonly) EKStructuredLocation * preferredLocationWithoutPrediction; 
@property (nonatomic,retain) NSDate * proposedStartDate; 
@property (nonatomic,retain) NSDate * proposedEndDate;                                                           //@synthesize proposedEndDate=_proposedEndDate - In the implementation block
@property (nonatomic,readonly) BOOL allowsProposedTimeModifications; 
@property (nonatomic,readonly) BOOL allowsResponseCommentModifications; 
@property (assign,nonatomic) BOOL isPhantom; 
@property (assign,nonatomic) unsigned long long cachedJunkStatus; 
@property (nonatomic,readonly) BOOL isSignificantlyDetached; 
@property (nonatomic,readonly) BOOL isSignificantlyDetachedIgnoringParticipation; 
@property (nonatomic,readonly) BOOL hasComplexRecurrence; 
@property (nonatomic,readonly) NSDate * originalStartDate; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) NSURL * conferenceURL; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) BOOL isPrivateEventSharedToMe; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (assign,nonatomic) long long participationStatus; 
@property (nonatomic,readonly) long long pendingParticipationStatus; 
@property (nonatomic,readonly) BOOL allowsParticipationStatusModifications; 
@property (nonatomic,readonly) long long currentUserGeneralizedParticipantRole; 
@property (getter=isCurrentUserInvitedAttendee,nonatomic,readonly) BOOL currentUserInvitedAttendee;              //@synthesize currentUserInvitedAttendee=_currentUserInvitedAttendee - In the implementation block
@property (nonatomic,readonly) BOOL allowsAvailabilityModifications; 
@property (nonatomic,readonly) BOOL allowsPrivacyLevelModifications; 
@property (nonatomic,readonly) BOOL allowsParticipantStatusModifications; 
@property (nonatomic,retain) NSDate * participationStatusModifiedDate; 
@property (nonatomic,readonly) BOOL supportsParticipationStatusModificationsWithoutNotification; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (assign,nonatomic) BOOL isAlerted; 
@property (assign,nonatomic) BOOL dateChanged; 
@property (assign,nonatomic) BOOL timeChanged; 
@property (assign,nonatomic) BOOL titleChanged; 
@property (assign,nonatomic) BOOL locationChanged; 
@property (assign,nonatomic) BOOL attendeeComment; 
@property (assign,nonatomic) BOOL attendeeStatus; 
@property (assign,nonatomic) BOOL attendeeProposedStartDate; 
@property (assign,nonatomic) BOOL attendeeDeclinedStartDate; 
@property (assign,nonatomic) BOOL attendeeReplyChanged; 
@property (assign,nonatomic) int externalTrackingStatus; 
@property (nonatomic,copy,readonly) NSDate * initialStartDate; 
@property (nonatomic,copy,readonly) NSDate * initialEndDate; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) BOOL isMasterOrDetachedOccurrence; 
@property (nonatomic,readonly) BOOL isStatusDirty; 
@property (nonatomic,readonly) BOOL isAllDayDirty; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDateIncludingTravelTime; 
@property (nonatomic,readonly) double durationIncludingTravel; 
@property (nonatomic,readonly) long long travelRoutingMode; 
@property (nonatomic,readonly) BOOL canBeRespondedTo; 
@property (nonatomic,readonly) BOOL canDetachSingleOccurrence; 
@property (nonatomic,readonly) BOOL hasAttachmentChanges; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDate; 
@property (nonatomic,readonly) EKCalendarDate * endCalendarDate; 
@property (assign,nonatomic) long long locationPredictionState; 
@property (nonatomic,readonly) BOOL hasPredictedLocation; 
@property (assign,nonatomic) BOOL firedTTL; 
@property (nonatomic,readonly) BOOL responseMustApplyToAll; 
@property (assign,nonatomic) unsigned long long junkStatus; 
@property (nonatomic,copy) NSSet * actions; 
@property (getter=isPrivacySet,nonatomic,readonly) BOOL privacySet; 
@property (nonatomic,copy) NSString * recurrenceSet; 
@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (nonatomic,readonly) EKParticipant * organizer; 
@property (assign,nonatomic) long long availability; 
@property (nonatomic,readonly) BOOL isDetached; 
@property (nonatomic,readonly) NSDate * occurrenceDate; 
@property (nonatomic,readonly) NSString * birthdayContactIdentifier; 
@property (nonatomic,readonly) long long birthdayPersonID; 
@property (nonatomic,readonly) NSString * birthdayPersonUniqueID;                                                //@synthesize birthdayPersonUniqueID=_birthdayPersonUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * sendersEmail; 
@property (nonatomic,readonly) NSString * sendersPhoneNumber; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)_locationStringForLocations:(id)arg1 ;
+(id)eventWithEventStore:(id)arg1 ;
+(id)EKObjectChangeSummarizer_singleValueDiffKeys;
+(id)EKObjectChangeSummarizer_multiValueDiffKeys;
+(long long)_eventAvailabilityForParticipantStatus:(long long)arg1 supportedEventAvailabilities:(unsigned long long)arg2 isAllDayEvent:(BOOL)arg3 ;
+(id)_updatedPredictedLocationRespectingTimeoutBudgetForEvent:(id)arg1 error:(id*)arg2 ;
+(id)_basicChangesRequiringSpanAll;
+(id)_relatedCachedTimeKeys;
+(BOOL)isMultiDayTimedEventWithStartDate:(id)arg1 endDate:(id)arg2 allDay:(BOOL)arg3 inCalendar:(id)arg4 ;
+(id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3 ;
+(id)knownKeysToSkipForFutureChanges;
+(id)knownKeysToUseForFutureChanges;
+(id)knownRequireRSVPKeys;
+(id)knownPerUserPropertyKeys;
+(BOOL)_calendarsAreSharedToMeInSameSourceAndHaveSameOwner:(id)arg1 ;
+(id)externalUriScheme;
+(long long)_coercedEventAvailabilityForDesiredAvailability:(long long)arg1 supportedAvailabilities:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)setTimeZone:(id)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(BOOL)_reset;
-(void)reset;
-(long long)status;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)duration;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(void)rollback;
-(id)uniqueId;
-(BOOL)refresh;
-(BOOL)isDetached;
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(NSURL *)launchURL;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)isEditable;
-(NSString *)eventIdentifier;
-(BOOL)isMaster;
-(void)setStatus:(long long)arg1 ;
-(void)setAvailability:(long long)arg1 ;
-(long long)availability;
-(NSArray *)locations;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setNotes:(id)arg1 ;
-(EKStructuredLocation *)endLocation;
-(unsigned long long)entityType;
-(id)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1 ;
-(id)externalURI;
-(BOOL)revert;
-(BOOL)isAllDay;
-(NSDate *)occurrenceDate;
-(BOOL)supportsJunkReporting;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(BOOL)couldBeJunk;
-(BOOL)dateChanged;
-(void)setDateChanged:(BOOL)arg1 ;
-(BOOL)timeChanged;
-(void)setTimeChanged:(BOOL)arg1 ;
-(BOOL)locationChanged;
-(void)setLocationChanged:(BOOL)arg1 ;
-(BOOL)titleChanged;
-(void)setTitleChanged:(BOOL)arg1 ;
-(id)_dateForNextOccurrence;
-(NSString *)locationWithoutPrediction;
-(void)rebase;
-(id)initWithObjectForCopy:(id)arg1 ;
-(void)markAsCommitted;
-(id)committedValueForKey:(id)arg1 ;
-(void)markAsSaved;
-(NSDate *)initialStartDate;
-(NSDate *)initialEndDate;
-(BOOL)isFloating;
-(id)specificIdentifier;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(EKStructuredLocation *)structuredLocation;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(BOOL)canMoveOrCopyToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(id)_generateNewUniqueID;
-(void)_adjustAfterRebaseForMovingFromOldSource:(id)arg1 toNewSource:(id)arg2 committingItem:(id)arg3 ;
-(id)startDateRaw;
-(void)setStartDateRaw:(id)arg1 ;
-(id)defaultAlarms;
-(BOOL)requiresDetach;
-(BOOL)allowsSpansOtherThanThisEvent;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsRecurrenceModifications;
-(BOOL)allowsAlarmModifications;
-(BOOL)allowsAttendeesModifications;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)startDateForRecurrence;
-(void)_willCommit;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(unsigned long long)junkStatus;
-(unsigned long long)cachedJunkStatus;
-(void)clearDetectedConferenceURL;
-(id)conferenceURLDetected;
-(NSURL *)conferenceURL;
-(id)_detectConferenceURL;
-(id)_prioritizedConferencesSources;
-(BOOL)_hasChangesForConferenceURLDetection;
-(void)_updateConferenceURL;
-(BOOL)_canWriteConferenceURL;
-(void)setConferenceURL:(NSURL *)arg1 ;
-(void)setIsJunk:(BOOL)arg1 shouldSave:(BOOL)arg2 ;
-(void)setCachedJunkStatus:(unsigned long long)arg1 ;
-(BOOL)_couldBeJunkCommon;
-(NSArray *)locationsWithoutPrediction;
-(void)setNotesCommon:(id)arg1 ;
-(void)setURLCommon:(id)arg1 ;
-(id)conferenceURLForDisplay;
-(void)updateConferenceURLIfNeeded;
-(NSString *)sendersEmail;
-(NSString *)sendersPhoneNumber;
-(BOOL)isMasterOrDetachedOccurrence;
-(BOOL)isStartDateDirty;
-(BOOL)isEndDateDirty;
-(NSDate *)originalStartDate;
-(NSDate *)proposedStartDate;
-(id)adjustedPersistedDateForDate:(id)arg1 withAdjustmentMode:(unsigned long long)arg2 ;
-(void)setProposedStartDate:(NSDate *)arg1 ;
-(BOOL)attendeeReplyChanged;
-(NSURL *)externalURL;
-(NSDate *)participationStatusModifiedDate;
-(void)setParticipationStatusModifiedDate:(NSDate *)arg1 ;
-(long long)participationStatus;
-(void)setParticipationStatus:(long long)arg1 ;
-(void)setBirthdayContact:(id)arg1 ;
-(void)setLunarCalendarString:(id)arg1 ;
-(NSString *)birthdayContactIdentifier;
-(id)birthdayContactName;
-(EKSuggestedEventInfo *)suggestionInfo;
-(NSDate *)recurrenceDate;
-(BOOL)isProposedTimeEvent;
-(id)endDateRaw;
-(void)setEndDateRaw:(id)arg1 ;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(void)setOriginalStartDate:(NSDate *)arg1 ;
-(long long)travelAdvisoryBehavior;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(id)responseComment;
-(void)setResponseComment:(id)arg1 ;
-(long long)locationPredictionState;
-(void)setLocationPredictionState:(long long)arg1 ;
-(id)birthdayID;
-(BOOL)canForward;
-(BOOL)disallowProposeNewTime;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(unsigned)invitationChangedProperties;
-(void)setInvitationChangedProperties:(unsigned)arg1 ;
-(int)externalTrackingStatus;
-(void)setExternalTrackingStatus:(int)arg1 ;
-(void)setBirthdayContactIdentifier:(NSString *)arg1 ;
-(NSString *)recurrenceSet;
-(void)setRecurrenceSet:(NSString *)arg1 ;
-(void)setSuggestionInfo:(EKSuggestedEventInfo *)arg1 ;
-(BOOL)firedTTL;
-(void)setFiredTTL:(BOOL)arg1 ;
-(id)initWithEventStore:(id)arg1 ;
-(EKCalendarDate *)originalOccurrenceStartDate;
-(BOOL)_isAllDay;
-(void)setOccurrenceIsAllDay:(BOOL)arg1 ;
-(id)_adjustedPersistedDateForDate:(id)arg1 withAdjustmentMode:(unsigned long long)arg2 pinMode:(unsigned long long)arg3 clientCalendarDate:(id*)arg4 ;
-(void)setOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(void)setOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(id)effectiveTimeZone;
-(BOOL)occurrenceIsAllDay;
-(id)_calculateDurationWithStart:(id)arg1 end:(id)arg2 allDay:(BOOL)arg3 ;
-(NSString *)eventOccurrenceID;
-(EKRecurrenceIdentifier *)recurrenceIdentifier;
-(EKCalendarDate *)occurrenceStartDate;
-(EKCalendarDate *)originalOccurrenceEndDate;
-(void)_clearLocationPredictionCacheIfNotFrozen;
-(id)_committedStartDate;
-(BOOL)isPhantom;
-(void)setIsPhantom:(BOOL)arg1 ;
-(void)setOriginalOccurrenceIsAllDay:(NSNumber *)arg1 ;
-(void)_updateDefaultAlarms;
-(void)_updateStartDateForDate:(id)arg1 withAdjustmentMode:(unsigned long long)arg2 ;
-(void)_updateEndDateForDate:(id)arg1 withAdjustmentMode:(unsigned long long)arg2 ;
-(void)forceSetTimeZone:(id)arg1 ;
-(void)clearCachedTimeValues;
-(NSDate *)startDateIncludingTravel;
-(void)_setStartDate:(id)arg1 andClearProposedTimes:(BOOL)arg2 ;
-(id)_pinDate:(id)arg1 withPinMode:(unsigned long long)arg2 ;
-(void)setOriginalOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)occurrenceEndDate;
-(void)setOriginalOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(BOOL)_settingTimeZoneChangesStartEndDates;
-(BOOL)_isOriginalOccurrenceStartDateSameAsCommittedStartDate;
-(BOOL)allowsParticipationStatusModifications;
-(BOOL)currentUserMayActAsOrganizer;
-(BOOL)allowsAvailabilityModifications;
-(void)_removeDefaultAlarms;
-(void)_addDefaultAlarms;
-(void)_setInvitationStatusAlertedIfNecessary;
-(void)_setInvitationStatusUnalertedIfNecessary;
-(BOOL)_shouldAlertInviteeDeclines;
-(id)privacyDescription;
-(BOOL)allowsPrivacyLevelModifications;
-(BOOL)_invitationChangedPropertyForFlag:(unsigned)arg1 ;
-(void)_setInvitationChangedProperty:(BOOL)arg1 forFlag:(unsigned)arg2 ;
-(BOOL)serverSupportedProposeNewTime;
-(void)setPredictedLocationFrozen:(BOOL)arg1 ;
-(id)_updatePredictedLocationCacheIfNeeded;
-(id)roomAttendees;
-(void)removeConferenceRooms:(id)arg1 ;
-(id)_conferenceRoomDisplayStrings;
-(void)setStructuredLocation:(id)arg1 preserveConferenceRooms:(BOOL)arg2 ;
-(BOOL)_needsPredictedLocationCacheUpdateHoldingLock;
-(id)_firstNonConferenceRoomLocationTitle;
-(id)_updatePredictedLocationCacheIfNeededHoldingLock;
-(void)_clearLocationPredictionCacheIfNotFrozenHoldingLock;
-(EKStructuredLocation *)preferredLocationWithoutPrediction;
-(BOOL)isPrivateEventSharedToMe;
-(BOOL)isAllDayDirty;
-(BOOL)hasAttachmentChanges;
-(BOOL)_hasBasicChangesRequiringSpanAll;
-(BOOL)_hasRecurrenceRuleChangeRequiringSpanAll;
-(BOOL)_hasOrHadRecurrenceRule;
-(BOOL)_eligibleForTravelAdvisoriesIncludePotential:(BOOL)arg1 ;
-(BOOL)locationIsAConferenceRoom;
-(BOOL)automaticLocationGeocodingAllowed;
-(BOOL)eligibleForTravelAdvisories;
-(id)startOfDayForStartDateInCalendar:(id)arg1 ;
-(long long)daysSpannedInCalendar:(id)arg1 ;
-(void)_resetInternalState;
-(BOOL)hasValidEventAction;
-(BOOL)_hasExternalIDOrDeliverySource;
-(long long)pendingParticipationStatus;
-(id)_travelTimeInternalDescription;
-(int)clearModifiedFlags;
-(void)setClearModifiedFlags:(int)arg1 ;
-(BOOL)validateAndUpdateOccurrenceDateFieldsAfterRefresh;
-(void)postModifiedNotification;
-(id)_committedEndDate;
-(void)setRequiresDetachDueToSnoozedAlarm:(BOOL)arg1 ;
-(BOOL)validateWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_isParticipationStatusDirty;
-(BOOL)validateRecurrenceRule:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateDatesAndRecurrencesGivenSpan:(long long)arg1 error:(id*)arg2 ;
-(void)_adjustForNewCalendarBeforeCommit;
-(BOOL)responseMustApplyToAll;
-(BOOL)requiresDetachDueToSnoozedAlarm;
-(void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3 ;
-(BOOL)_isSimpleRepeatingEvent;
-(BOOL)conformsToRecurrenceRules:(id)arg1 ;
-(BOOL)_isSignificantlyDetachedComparedToMaster:(id)arg1 shouldIgnorePartStat:(BOOL)arg2 ;
-(void)_propagateChangesToDetachedEvents:(id)arg1 significantlyDetachedEvents:(id)arg2 startDateOffset:(id)arg3 duration:(id)arg4 calendar:(id)arg5 ;
-(void)_clearExceptionDatesAndUpdateDetachedOriginalDates;
-(void)_filterExceptionDates;
-(void)_applyTimeChangesToMaster;
-(void)_updateModifiedPropertiesForThisEventAndAllDetachments;
-(void)_updateModifiedProperties;
-(id)_updateMasterDate:(id)arg1 forChangeToOccurrenceDate:(id)arg2 fromOriginalOccurrenceDate:(id)arg3 ;
-(void)_addOrganizerToRecentsIfNeeded;
-(void)_addNewAttendeesToRecentsIfNeeded;
-(void)_clearOriginalDateFields;
-(NSNumber *)originalOccurrenceIsAllDay;
-(EKCalendarDate *)startCalendarDate;
-(id)_keysToChangeForDuplicateWithOptions:(long long)arg1 ;
-(BOOL)_occurrenceExistsOnDate:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)_checkStartDateConstraintAgainstDate:(SCD_Struct_EK5)arg1 timeZone:(id)arg2 error:(id*)arg3 ;
-(BOOL)durationOverlapsRecurrenceInterval;
-(BOOL)overlapsWithOrIsSameDayAsEventInSeries;
-(BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(long long)arg1 ;
-(void)_deleteFromOccurrenceDateOnward:(id)arg1 ;
-(void)_deleteThisOccurrence;
-(void)_updateSelfFromDetachedEventIfNeededForDelete;
-(void)_cancelDetachedEventsWithSpan:(long long)arg1 ;
-(BOOL)_eventIsTheOnlyRemainingOccurrence;
-(BOOL)_noRemainingEarlierOccurrences;
-(BOOL)_shouldCancelInsteadOfDeleteWithSpan:(long long)arg1 ;
-(BOOL)_cancelWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_shouldDeclineInsteadOfDelete;
-(BOOL)_deleteWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isFirstOccurrence;
-(BOOL)_shouldPreserveFutureWhenSlicingWithStartDate:(id)arg1 newStartDate:(id)arg2 ;
-(id)masterEvent;
-(BOOL)updateEventToEvent:(id)arg1 commit:(BOOL)arg2 ;
-(id)potentialConflictOccurrenceDatesInTimePeriod:(double*)arg1 ;
-(BOOL)_fetchedEventIsConflict:(id)arg1 forStartDate:(id)arg2 endDate:(id)arg3 ;
-(BOOL)isTentative;
-(void)_clearAttendeeChangedFlags;
-(void)setAttendeeComment:(BOOL)arg1 ;
-(void)setAttendeeStatus:(BOOL)arg1 ;
-(void)setAttendeeProposedStartDate:(BOOL)arg1 ;
-(void)setAttendeeDeclinedStartDate:(BOOL)arg1 ;
-(BOOL)isDifferentWithDiff:(id)arg1 ;
-(BOOL)_diff:(id)arg1 isDifferentFromCommittedEventHelperRequiresReschedule:(BOOL)arg2 ;
-(long long)currentUserGeneralizedParticipantRole;
-(BOOL)isDifferentAndModifiedAttendeesWithDiff:(id)arg1 ;
-(id)diffFromCommitted;
-(BOOL)isDifferentAndRequiresRescheduleWithDiff:(id)arg1 ;
-(BOOL)isDifferentAndRequiresRSVPWithDiff:(id)arg1 ;
-(BOOL)isDifferentAndHasUnscheduledAttendeesWithDiff:(id)arg1 ;
-(BOOL)_requirementsToMoveOrCopyToCalendarHelperAllowedToMoveOrCopyEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(BOOL)_requirementsToMoveToCalendarHelperDuplicationRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(BOOL)_requirementsToMoveToCalendarHelperAlterationsRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(BOOL)_requirementsToMoveToCalendarHelperReinviteAttendeesRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(BOOL)_requirementsToMoveToCalendarHelperNeedToRemoveOriginalToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(BOOL)_requirementsToMoveToCalendarHelperRemoveAttendeesRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(long long)requirementsToMoveFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 allowedRequirements:(long long)arg3 error:(id*)arg4 ;
-(BOOL)_canMoveOrCopyFromCalendar:(id)arg1 toCalendar:(id)arg2 allowedRequirements:(long long)arg3 error:(id*)arg4 ;
-(BOOL)seriesHasOutOfOrderEvents;
-(BOOL)seriesHasOverlappingOrOnSameDayOrOutOfOrderEvents;
-(id)_nsCalendar;
-(BOOL)_suggestedStartDateHelperRecurrenceRuleRequiresExpansion:(id)arg1 forDate:(id)arg2 ;
-(BOOL)isPrivacySet;
-(BOOL)_hasAbsoluteAlarms;
-(id)suggestedStartDateForCurrentRecurrenceRule;
-(BOOL)isValidAttendee:(id)arg1 forCalendar:(id)arg2 ;
-(BOOL)isCurrentUserInvitedAttendee;
-(BOOL)isStatusDirty;
-(BOOL)phantomMaster;
-(void)setPhantomMaster:(BOOL)arg1 ;
-(EKCalendarDate *)startCalendarDateIncludingTravelTime;
-(void)overrideStartDate:(id)arg1 ;
-(double)durationIncludingTravel;
-(EKCalendarDate *)endCalendarDate;
-(BOOL)supportsParticipationStatusModificationsWithoutNotification;
-(BOOL)allowsParticipantStatusModifications;
-(BOOL)_userAddressesRepresentInvitedAttendee:(id)arg1 checkEmailAddresses:(BOOL)arg2 ;
-(void)markEventAsAttendeeForward;
-(long long)_parentParticipationStatus;
-(long long)birthdayPersonID;
-(BOOL)isBirthday;
-(id)lunarCalendarString;
-(void)makeRecurrenceEndDateBased;
-(void)makeRecurrenceEndCountBased;
-(BOOL)hasComplexRecurrence;
-(void)clearInvitationStatus;
-(void)addEventAction:(id)arg1 ;
-(void)removeEventAction:(id)arg1 ;
-(BOOL)isAlerted;
-(void)setIsAlerted:(BOOL)arg1 ;
-(NSDate *)proposedEndDate;
-(long long)travelRoutingMode;
-(BOOL)allowsTravelTimeModifications;
-(BOOL)allowsAllDayModifications;
-(BOOL)attendeeComment;
-(BOOL)attendeeStatus;
-(BOOL)attendeeProposedStartDate;
-(BOOL)attendeeDeclinedStartDate;
-(BOOL)allowsProposedTimeModifications;
-(BOOL)supportsAddingAttachments;
-(void)addConferenceRooms:(id)arg1 ;
-(void)confirmPredictedLocation:(id)arg1 ;
-(void)rejectPredictedLocation;
-(BOOL)hasPredictedLocation;
-(void)setLocationPredictionAllowed:(BOOL)arg1 ;
-(void)setEndLocation:(EKStructuredLocation *)arg1 ;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(long long)compareStartDateIncludingTravelWithEvent:(id)arg1 ;
-(BOOL)canDetachSingleOccurrence;
-(BOOL)changingAllDayPropertyIsAllowed;
-(BOOL)hasChangesRequiringSpanAll;
-(BOOL)potentiallyEligibleForTravelAdvisories;
-(BOOL)travelAdvisoryBehaviorIsEffectivelyEnabled;
-(id)startOfDayForEndDateInCalendar:(id)arg1 ;
-(BOOL)isMultiDayTimedEventInCalendar:(id)arg1 ;
-(BOOL)canBeRespondedTo;
-(BOOL)commitWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isSignificantlyDetached;
-(BOOL)isSignificantlyDetachedIgnoringParticipation;
-(BOOL)hasAttendeeProposedTimes;
-(id)duplicateWithOptions:(long long)arg1 ;
-(unsigned long long)countOfAttendeeProposedTimes;
-(BOOL)allowsResponseCommentModifications;
-(BOOL)removeWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isMainOccurrence;
-(BOOL)isOnlyOccurrence;
-(id)privacyLevelString;
-(BOOL)updateEventToEvent:(id)arg1 ;
-(id)scanForConflicts;
-(BOOL)updateWithGeocodedMapItemAndSaveWithCommit:(id)arg1 eventStore:(id)arg2 error:(id*)arg3 ;
-(void)dismissAcceptedProposeNewTimeNotification;
-(BOOL)isEqual:(id)arg1 comparingKeys:(id)arg2 ;
-(BOOL)isDifferentAndHasForwardedAttendeesWithDiff:(id)arg1 ;
-(BOOL)isDifferentAndHasNewProposedTimeWithDiff:(id)arg1 ;
-(BOOL)isDifferentExceptingPerUserPropertiesWithDiff:(id)arg1 ;
-(BOOL)isDifferentFromCommittedEventAndRequiresReschedule;
-(BOOL)isDifferentFromCommittedEventAndRequiresRSVP;
-(BOOL)isDifferentFromCommittedEventAndHasUnscheduledAttendees;
-(long long)requirementsToMoveToCalendar:(id)arg1 ;
-(BOOL)requiresCopyToMoveFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(NSString *)birthdayPersonUniqueID;
-(void)setProposedEndDate:(NSDate *)arg1 ;
@end
