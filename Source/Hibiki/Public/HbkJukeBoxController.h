#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkGalleryProductInfo.h"
#include "HbkJukeBoxMusicData.h"
#include "HbkJukeBoxPurchasedInfo.h"
#include "HbkJukeBoxController.generated.h"

class AHbkCameraActor;
class UAkAudioEvent;
class UDataTable;
class UHbkJukeBoxWidget;
class UStringTable;

UCLASS(Blueprintable)
class AHbkJukeBoxController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGalleryProductInfo> SoundGalleryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkJukeBoxPurchasedInfo> PurchaseGalleryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShuffleIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCameraActor> JukeBoxCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxWidget* JukeBoxWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* StringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MusicDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MenuInEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MenuOutEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkJukeBoxWidget> JukeBoxWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayPrevMusicTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HistorySavedNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkJukeBoxMusicData> MusicDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkJukeBoxMusicData PlayingMusicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkJukeBoxMusicData> PrevMusicDataList;
    
public:
    AHbkJukeBoxController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UHbkJukeBoxWidget* GetJukeBoxWidget();
    
};

