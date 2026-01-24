#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkTalkMan808COMDelegateDelegate.h"
#include "HbkTalkSessionConf.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkTalkManager.generated.h"

class AActor;
class AHbkTalkSession;
class UAkAudioEvent;
class UDataTable;
class UHbkTalkWidget;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTalkManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkMan808COMDelegate OnStart808COM;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkMan808COMDelegate OnEnd808COM;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkTalkSession> TalkSessionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkTalkSession> ActionVoiceSessionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkTalkSession> FreeTalkSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkTalkSession> LocalTalkSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkTalkSession> ActionVoiceSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> SoundMarkerActions;
    
public:
    UHbkTalkManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SweepTalkSession(UObject* WorldContextObject, bool bFreeSession, bool bLocalSession);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AHbkTalkSession* StartTalkSession3DTest(UObject* WorldContextObject, const FHbkTalkSessionConf& Conf, UHbkTalkWidget* NewTalkWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AHbkTalkSession* StartTalkSession(UObject* WorldContextObject, const FHbkTalkSessionConf& Conf);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShowContextSubtitle(UObject* WorldContextObject, const UDataTable* TalkData, const FName TalkRow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetTalkRow(UObject* WorldContextObject, FName NewTalkRow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RequestTalkLineSkip(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PushActionVoiceLineByBook(UObject* WorldContextObject, UDataTable* TalkData, FName LineID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayVoiceAtLocation(UObject* WorldContextObject, UAkAudioEvent* InVoice, const FVector& InLocation, const FRotator& InRotation, bool bForceStopOtherACVs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayVoice(UObject* WorldContextObject, UAkAudioEvent* Voice, AActor* Talker, bool bForceStopOtherACVs);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartGameoverSequencer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHoldingTalkSessionForMainScenario(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHoldingTalkSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CloseTalkSessionAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CloseTalkSession(UObject* WorldContextObject, AHbkTalkSession* TargetTalkSession);
    
};

