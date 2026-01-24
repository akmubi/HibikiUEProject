#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecDBeastBattleRoomActorActivate.h"
#include "HbkGimmick_SecDBeastBattleRoom_OnFallenDelegate.h"
#include "HbkGimmick_SecDBeastBattleRoom.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_SecDBeastBattleRoom : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDBeastBattleRoom_OnFallen OnFallen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDBeastBattleRoomActorActivate Bg0590OpenActorActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDBeastBattleRoomActorActivate Bg0590ClosedActorActivate;
    
    AHbkGimmick_SecDBeastBattleRoom(const FObjectInitializer& ObjectInitializer);

};

