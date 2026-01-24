#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0210_MaterialInfo_t.h"
#include "HbkGimmick_bg0210.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0210 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGimmickBg0210_ActivateDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickBg0210_ActivateDelegate OnBg0210_Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_bg0210_MaterialInfo_t> matInfoArray;
    
public:
    AHbkGimmick_bg0210(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBoxComponent* GetObjRightBoxCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBoxComponent* GetObjLeftBoxCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBoxComponent* GetHandrailRightBoxCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBoxComponent* GetHandrailLeftBoxCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBoxComponent* GetBridgetBoxCollision();
    
};

