/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletin : PBCodable <NSCopying> {
    NSData * _alertSuppressionContexts;
    NSData * _attachment;
    unsigned int  _attachmentType;
    NSString * _bulletinID;
    NSString * _category;
    BOOL  _containsUpdatedAttachment;
    NSData * _context;
    double  _date;
    BLTPBAction * _dismissAction;
    unsigned int  _feed;
    struct { 
        unsigned int date : 1; 
        unsigned int publicationDate : 1; 
        unsigned int attachmentType : 1; 
        unsigned int sectionSubtype : 1; 
        unsigned int soundAlertType : 1; 
        unsigned int containsUpdatedAttachment : 1; 
        unsigned int loading : 1; 
    }  _has;
    BOOL  _includesSound;
    BOOL  _loading;
    NSString * _messageTitle;
    double  _publicationDate;
    NSString * _publisherBulletinID;
    NSString * _recordID;
    NSString * _sectionDisplayName;
    NSString * _sectionID;
    int  _sectionSubtype;
    BLTPBAction * _snoozeAction;
    NSString * _sockPuppetAppBundleID;
    NSString * _soundAccountIdentifier;
    int  _soundAlertType;
    NSString * _soundToneIdentifier;
    NSString * _subtitle;
    NSMutableArray * _supplementaryActions;
    NSString * _teamID;
    NSString * _title;
    NSString * _universalSectionID;
}

@property (nonatomic, retain) NSData *alertSuppressionContexts;
@property (nonatomic, retain) NSData *attachment;
@property (nonatomic) unsigned int attachmentType;
@property (nonatomic, retain) NSString *bulletinID;
@property (nonatomic, retain) NSString *category;
@property (nonatomic) BOOL containsUpdatedAttachment;
@property (nonatomic, retain) NSData *context;
@property (nonatomic) double date;
@property (nonatomic, retain) BLTPBAction *dismissAction;
@property (nonatomic) unsigned int feed;
@property (nonatomic, readonly) BOOL hasAlertSuppressionContexts;
@property (nonatomic, readonly) BOOL hasAttachment;
@property (nonatomic) BOOL hasAttachmentType;
@property (nonatomic, readonly) BOOL hasBulletinID;
@property (nonatomic, readonly) BOOL hasCategory;
@property (nonatomic) BOOL hasContainsUpdatedAttachment;
@property (nonatomic, readonly) BOOL hasContext;
@property (nonatomic) BOOL hasDate;
@property (nonatomic, readonly) BOOL hasDismissAction;
@property (nonatomic) BOOL hasLoading;
@property (nonatomic, readonly) BOOL hasMessageTitle;
@property (nonatomic) BOOL hasPublicationDate;
@property (nonatomic, readonly) BOOL hasPublisherBulletinID;
@property (nonatomic, readonly) BOOL hasRecordID;
@property (nonatomic, readonly) BOOL hasSectionDisplayName;
@property (nonatomic, readonly) BOOL hasSectionID;
@property (nonatomic) BOOL hasSectionSubtype;
@property (nonatomic, readonly) BOOL hasSnoozeAction;
@property (nonatomic, readonly) BOOL hasSockPuppetAppBundleID;
@property (nonatomic, readonly) BOOL hasSoundAccountIdentifier;
@property (nonatomic) BOOL hasSoundAlertType;
@property (nonatomic, readonly) BOOL hasSoundToneIdentifier;
@property (nonatomic, readonly) BOOL hasSubtitle;
@property (nonatomic, readonly) BOOL hasTeamID;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readonly) BOOL hasUniversalSectionID;
@property (nonatomic) BOOL includesSound;
@property (nonatomic) BOOL loading;
@property (nonatomic, retain) NSString *messageTitle;
@property (nonatomic) double publicationDate;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSString *sectionDisplayName;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) int sectionSubtype;
@property (nonatomic, retain) BLTPBAction *snoozeAction;
@property (nonatomic, retain) NSString *sockPuppetAppBundleID;
@property (nonatomic, retain) NSString *soundAccountIdentifier;
@property (nonatomic) int soundAlertType;
@property (nonatomic, retain) NSString *soundToneIdentifier;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSMutableArray *supplementaryActions;
@property (nonatomic, retain) NSString *teamID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *universalSectionID;

+ (void)_addPrimaryAttachmentFromBBBulletin:(id)arg1 toBLTPBBulletin:(id)arg2 observer:(id)arg3 completion:(id /* block */)arg4;
+ (void)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 isSockPuppetAppInstalled:(BOOL)arg3 observer:(id)arg4 feed:(unsigned int)arg5 teamID:(id)arg6 universalSectionID:(id)arg7 completion:(id /* block */)arg8;

- (void).cxx_destruct;
- (void)addSupplementaryActions:(id)arg1;
- (id)alertSuppressionContexts;
- (id)attachment;
- (unsigned int)attachmentType;
- (id)bulletinID;
- (id)category;
- (void)clearSupplementaryActions;
- (BOOL)containsUpdatedAttachment;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dismissAction;
- (unsigned int)feed;
- (BOOL)hasAlertSuppressionContexts;
- (BOOL)hasAttachment;
- (BOOL)hasAttachmentType;
- (BOOL)hasBulletinID;
- (BOOL)hasCategory;
- (BOOL)hasContainsUpdatedAttachment;
- (BOOL)hasContext;
- (BOOL)hasDate;
- (BOOL)hasDismissAction;
- (BOOL)hasLoading;
- (BOOL)hasMessageTitle;
- (BOOL)hasPublicationDate;
- (BOOL)hasPublisherBulletinID;
- (BOOL)hasRecordID;
- (BOOL)hasSectionDisplayName;
- (BOOL)hasSectionID;
- (BOOL)hasSectionSubtype;
- (BOOL)hasSnoozeAction;
- (BOOL)hasSockPuppetAppBundleID;
- (BOOL)hasSoundAccountIdentifier;
- (BOOL)hasSoundAlertType;
- (BOOL)hasSoundToneIdentifier;
- (BOOL)hasSubtitle;
- (BOOL)hasTeamID;
- (BOOL)hasTitle;
- (BOOL)hasUniversalSectionID;
- (unsigned int)hash;
- (BOOL)includesSound;
- (BOOL)isEqual:(id)arg1;
- (BOOL)loading;
- (void)mergeFrom:(id)arg1;
- (id)messageTitle;
- (double)publicationDate;
- (id)publisherBulletinID;
- (id)publisherMatchID;
- (BOOL)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionDisplayName;
- (id)sectionID;
- (int)sectionSubtype;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentType:(unsigned int)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setContainsUpdatedAttachment:(BOOL)arg1;
- (void)setContext:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setFeed:(unsigned int)arg1;
- (void)setHasAttachmentType:(BOOL)arg1;
- (void)setHasContainsUpdatedAttachment:(BOOL)arg1;
- (void)setHasDate:(BOOL)arg1;
- (void)setHasLoading:(BOOL)arg1;
- (void)setHasPublicationDate:(BOOL)arg1;
- (void)setHasSectionSubtype:(BOOL)arg1;
- (void)setHasSoundAlertType:(BOOL)arg1;
- (void)setIncludesSound:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setMessageTitle:(id)arg1;
- (void)setPublicationDate:(double)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionDisplayName:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(int)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSockPuppetAppBundleID:(id)arg1;
- (void)setSoundAccountIdentifier:(id)arg1;
- (void)setSoundAlertType:(int)arg1;
- (void)setSoundToneIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (id)snoozeAction;
- (id)sockPuppetAppBundleID;
- (id)soundAccountIdentifier;
- (int)soundAlertType;
- (id)soundToneIdentifier;
- (id)subtitle;
- (id)supplementaryActions;
- (id)supplementaryActionsAtIndex:(unsigned int)arg1;
- (unsigned int)supplementaryActionsCount;
- (id)teamID;
- (id)title;
- (id)universalSectionID;
- (void)writeTo:(id)arg1;

@end
