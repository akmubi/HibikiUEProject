#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "HbkMusicTitleDataManager.generated.h"

class UHbkMusicTitleDataAsset;
class UHbkMusicTitleWidget;

UCLASS(Blueprintable)
class AHbkMusicTitleDataManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkMusicTitleDataAsset* AssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkMusicTitleWidget> WidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkMusicTitleWidget* Widget;
    
public:
    AHbkMusicTitleDataManager(const FObjectInitializer& ObjectInitializer);

};

